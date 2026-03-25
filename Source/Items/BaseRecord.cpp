/*
 * Copyright (C) 2016-2026 Vladimir Kuznetsov <smithcoder@yandex.ru> https://smithcoder.ru/
 *
 * This file is part of the Smitto.
 *
 * Smitto is free software; you can redistribute it and/or modify it under the terms of the
 * GNU Lesser General Public License as published by the Free Software Foundation;
 * either version 3 of the License, or (at your option) any later version.
 *
 * Smitto is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
 * without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with Smitto; see the file LICENSE. If not, see <http://www.gnu.org/licenses/>.
 */

#include "BaseRecord.h"

namespace Smitto {

QVector<Ramio::Meta::Property> BaseRecord::registerMetaFields() const
{
	QVector<Ramio::Meta::Property> res = Ramio::MetaStandardItemData::registerMetaFields();
	RMETA_DATA_PROPERTY(user_id, PKey, "user_id", QObject::tr("Идентификатор пользователя"), FKey, QString())
	RMETA_DATA_PROPERTY(created_time, DateTime, "created_time", QObject::tr("Время создания"), Field, QString())
	RMETA_DATA_PROPERTY(changed_time, DateTime, "changed_time", QObject::tr("Время изменения"), Field, QString())
	RMETA_DATA_PROPERTY(updated_time, DateTime, "updated_time", QObject::tr("Время синхронизации"), Field, QString())
	return res;
}

} // Smitto::

<h1 align="center">
<img src="https://i.imgur.com/d9a8NfA.png" alt="Friccoin" width="300"/>
<br/><br/>
Friccoin Core [FRC, B]
</h1>

انتخاب زبان: [EN](./README.md) | [CN](./README_zh_CN.md) | [PT](./README_pt_BR.md) | FA | [VI](./README_vi_VN.md) | [FR](./README_fr_FR.md) | [JA](./README_ja_JP.md) | [DE](./README_de_DE.md)

پپکوین یک ارز دیجیتال با تمرکز بر جامعه است. این ارز تنها با یک هدف ساخته شده است: ایجاد یک جامعه جدید و سرگرم‌کننده، درست مانند جامعه اصلی دوج‌کوین.

برخلاف تمام نسخه‌های قبلی، پپکوین یک سکه لایه یک است. این به این معناست که استخرهای نقدینگی برای تخلیه وجود ندارد، کیف‌های سیاه رنگ برای لغو عضویت و هیچ قرارداد هوشمند پیچیده‌ای وجود ندارد. پپکوین یک زنجیره بلوک ساده است.

همانند دوجکوین، نرم‌افزار هسته پپکوین به هر کسی اجازه می‌دهد تا یک گره در شبکه‌های زنجیره بلوک پپکوین اداره کند و از روش هشینگ اسکریپت برای اثبات کار استفاده می‌کند. این از نرم‌افزار هسته بیت‌کوین و سایر ارزهای دیجیتال تغییر یافته است.

برای اطلاعات در مورد کارمزد‌های پیشفرض استفاده شده در شبکه پپکوین، لطفاً به [توصیه کارمزد](doc/fee-recommendation.md) مراجعه کنید.

**وب‌سایت:** [friccoin.org](https://friccoin.org)

## تفاوت‌های دوجکوین

پپکوین یک شاخه از دوجکوین است. به منظور ایجاد اشتهارنگی، ما سعی می‌کنیم تا پپکوین را مشابه دوجکوین نگه داریم.

تغییرات:

* آدرس‌ها با حرف `B` شروع می‌شوند به جای حرف `D`
* ویژگی‌های BIPS با شروع بلوک ۱۰۰۰ آغاز می‌شود
* AuxPow از بلوک ۱۵۰۰ شروع می‌شود (شناسه زنجیره: ۶۳)
* رابط کاربری گرافیکی برای پپکوین طراحی شده است

## استفاده 💻

برای شروع سفر خود با هسته پپکوین، راهنمای [نصب](INSTALL.md) و آموزش [شروع کار](doc/getting-started.md) را ببینید.

رابط JSON-RPC API ارائه شده توسط هسته پپکوین خودش توضیح داده شده است و می‌توانید با استفاده از `friccoin-cli help` آن را مشاهده کنید، در حالی که اطلاعات دقیق برای هر دستور را می‌توانید با `friccoin-cli help <دستور>` مشاهده کنید. به علاوه، به [مستندات هسته بیت‌کوین](https://developer.bitcoin.org/reference/rpc/) - که یک پروتکل مشابه را اجرا می‌کند - مراجعه کنید تا نسخه‌ای جستجوپذیر را دریافت کنید.

### درگاه‌ها

هسته پپکوین به طور پیش‌فرض از پورت `4327` برای ارتباط همتای به همتا استفاده می‌کند که برای هماهنگ سازی زنجیره بلوک "مین‌نت" و اطلاع از تراکنش‌ها و بلوک‌های جدید لازم است. به علاوه، می‌توان یک پورت JSONRPC باز کرد که به طور پیش‌فرض برای گره‌های مین‌نت پورت `4326` است. از این که پورت‌های RPC را در اینترنت عمومی افشا نکنید به شدت توصیه می‌شود.

| عملکرد | مین‌نت | تست‌نت | رجتست |
| :------- | ------: | ------: | ------: |
| P2P      |   4327 |   14328 |   14329 |
| RPC      |   4326 |   15613 |   15614 |

## توسعه در حال ادامه 💻

هسته پپکوین یک نرم‌افزار منبع باز و توسعه‌دهی توسط اجتماع است. فرآیند توسعه به صورت علنی و در دسترس عمومی است؛ هر کس می‌تواند نرم‌افزار را ببیند، بحث کند و در آن کار کند.

منابع اصلی توسعه:

* از [پروژه‌های GitHub](https://github.com/Friccoin/Friccoin-core/projects) برای پیگیری کارهای برنامه‌ریزی شده و در دست اجرا برای انتشارهای آتی استفاده می‌شود.
* از [بحث در GitHub](https://github.com/Friccoin/Friccoin-core/discussions) برای بحث در مورد ویژگی‌ها، برنامه‌های برنامه‌ریزی و غیر برنامه‌ریزی مرتبط با توسعه هسته پپکوین، پروتکل‌های مبنایی و دارایی FRC استفاده می‌شود.

### استراتژی نسخه
شماره‌های نسخه به صورت `major.minor.patch` پیروی می‌شوند.

### شاخه‌ها
در این مخزن ۳ نوع شاخه وجود دارد:

- **اصلی:** پایدار، شامل آخرین نسخه از آخرین انتشار *major.minor* است.
- **نگهداری:** پایدار، شامل آخرین نسخه از انتشارهای قبلی که هنوز تحت نگهداری فعال هستند. قالب: `<نسخه>-maint`
- **توسعه:** ناپایدار، شامل کد جدید برای انتشارهای برنامه‌ریزی شده است. قالب: `<نسخه>-dev`

*شاخه‌های اصلی و نگهداری به صورت انحصاری توسط انتشار قابل تغییر هستند. انتشارات برنامه‌ریزی شده همیشه یک شاخه توسعه دارند و درخواست‌های تراکنش باید همواره در مقابل آن‌ها ارسال شود. شاخه‌های نگهداری تنها برای **اصلاحات باگ** هستند، لطفاً ویژگی‌های جدید را در مقابل شاخه توسعه با بالاترین نسخه ارسال کنید.*

## همکاری 🤝

اگر با این نرم‌افزار باگی پیدا کردید یا مشکلی دارید، لطفاً آن را با استفاده از [سیستم گزارش مشکل](https://github.com/Friccoin/Friccoin-core/issues/new?assignees=&labels=bug&template=bug_report.md&title=%5Bbug%5D+) گزارش کنید.

لطفاً [راهنمای همکاری](CONTRIBUTING.md) را ببینید تا ببینید چگونه می‌توانید در توسعه هسته پپکوین شرکت کنید. اغلب اوقات [موضوعات نیاز به کمک](https://github.com/Friccoin/Friccoin-core/labels/help%20wanted) وجود دارند که مشارکت‌های شما تأثیر بالایی دارند و تشکر فراوان می‌شود.

## انجمن‌ها 🐸

شما می‌توانید به انجمن‌ها در رسانه‌های اجتماعی مختلف بپیوندید. برای دیدن آنچه در حال انجام است، با مردم ملاقات کنید و بحث کنید، آخرین ممی، درباره پپکوین بیاموزید، کمک دهید یا بپرسید، تا مشروعیت پروژه را به اشتراک بگذارید.

اینجا چند مکان برای بازدید هستند:


* [Discord](https://discord.gg/rqtkgwsk6j)
* [Telegram](https://t.me/fricscoin)
* [Twitter/X](https://x.com/friccoinpow)

## سوالات متداول ❓

آیا سوالی در مورد پپکوین دارید؟ شاید پاسخی از پیش در [سوالات متداول](doc/FAQ.md) یا بخش [پرسش و پاسخ](https://github.com/Friccoin/Friccoin-core/discussions/categories/q-a) در تالار بحث وجود داشته باشد!

## لایسنس ⚖️
هسته پپکوین تحت شرایط مجوز MIT منتشر شده است. برای اطلاعات بیشتر می‌توانید به [COPYING](COPYING) مراجعه کنید یا به [opensource.org](https://opensource.org/licenses/MIT) مراجعه کنید.

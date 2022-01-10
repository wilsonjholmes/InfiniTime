/**
 * This file was generated by Apache newt version: 1.9.0-dev
 */

#ifndef H_MYNEWT_SYSCFG_
#define H_MYNEWT_SYSCFG_

/**
 * This macro exists to ensure code includes this header when needed.  If code
 * checks the existence of a setting directly via ifdef without including this
 * header, the setting macro will silently evaluate to 0.  In contrast, an
 * attempt to use these macros without including this header will result in a
 * compiler error.
 */
#define MYNEWT_VAL(_name)                       MYNEWT_VAL_ ## _name
#define MYNEWT_VAL_CHOICE(_name, _val)          MYNEWT_VAL_ ## _name ## __ ## _val

/*** @apache-mynewt-core/crypto/tinycrypt */
#ifndef MYNEWT_VAL_TINYCRYPT_SYSINIT_STAGE
#define MYNEWT_VAL_TINYCRYPT_SYSINIT_STAGE (200)
#endif

#ifndef MYNEWT_VAL_TINYCRYPT_UECC_RNG_TRNG_DEV_NAME
#define MYNEWT_VAL_TINYCRYPT_UECC_RNG_TRNG_DEV_NAME ("trng")
#endif

#ifndef MYNEWT_VAL_TINYCRYPT_UECC_RNG_USE_TRNG
#define MYNEWT_VAL_TINYCRYPT_UECC_RNG_USE_TRNG (0)
#endif

/*** @apache-mynewt-core/hw/hal */
#ifndef MYNEWT_VAL_HAL_ENABLE_SOFTWARE_BREAKPOINTS
#define MYNEWT_VAL_HAL_ENABLE_SOFTWARE_BREAKPOINTS (1)
#endif

#ifndef MYNEWT_VAL_HAL_FLASH_VERIFY_BUF_SZ
#define MYNEWT_VAL_HAL_FLASH_VERIFY_BUF_SZ (16)
#endif

#ifndef MYNEWT_VAL_HAL_FLASH_VERIFY_ERASES
#define MYNEWT_VAL_HAL_FLASH_VERIFY_ERASES (0)
#endif

#ifndef MYNEWT_VAL_HAL_FLASH_VERIFY_WRITES
#define MYNEWT_VAL_HAL_FLASH_VERIFY_WRITES (0)
#endif

#ifndef MYNEWT_VAL_HAL_SYSTEM_RESET_CB
#define MYNEWT_VAL_HAL_SYSTEM_RESET_CB (0)
#endif

/*** @apache-mynewt-core/kernel/os */
#ifndef MYNEWT_VAL_FLOAT_USER
#define MYNEWT_VAL_FLOAT_USER (0)
#endif

#ifndef MYNEWT_VAL_MSYS_1_BLOCK_COUNT
#define MYNEWT_VAL_MSYS_1_BLOCK_COUNT (12)
#endif

#ifndef MYNEWT_VAL_MSYS_1_BLOCK_SIZE
#define MYNEWT_VAL_MSYS_1_BLOCK_SIZE (292)
#endif

#ifndef MYNEWT_VAL_MSYS_1_SANITY_MIN_COUNT
#define MYNEWT_VAL_MSYS_1_SANITY_MIN_COUNT (0)
#endif

#ifndef MYNEWT_VAL_MSYS_2_BLOCK_COUNT
#define MYNEWT_VAL_MSYS_2_BLOCK_COUNT (0)
#endif

#ifndef MYNEWT_VAL_MSYS_2_BLOCK_SIZE
#define MYNEWT_VAL_MSYS_2_BLOCK_SIZE (0)
#endif

#ifndef MYNEWT_VAL_MSYS_2_SANITY_MIN_COUNT
#define MYNEWT_VAL_MSYS_2_SANITY_MIN_COUNT (0)
#endif

#ifndef MYNEWT_VAL_MSYS_SANITY_TIMEOUT
#define MYNEWT_VAL_MSYS_SANITY_TIMEOUT (60000)
#endif

#ifndef MYNEWT_VAL_OS_ASSERT_CB
#define MYNEWT_VAL_OS_ASSERT_CB (0)
#endif

#ifndef MYNEWT_VAL_OS_CLI
#define MYNEWT_VAL_OS_CLI (0)
#endif

#ifndef MYNEWT_VAL_OS_COREDUMP
#define MYNEWT_VAL_OS_COREDUMP (0)
#endif

#ifndef MYNEWT_VAL_OS_CPUTIME_FREQ
#define MYNEWT_VAL_OS_CPUTIME_FREQ (32768)
#endif

#ifndef MYNEWT_VAL_OS_CPUTIME_TIMER_NUM
#define MYNEWT_VAL_OS_CPUTIME_TIMER_NUM (5)
#endif

#ifndef MYNEWT_VAL_OS_CRASH_FILE_LINE
#define MYNEWT_VAL_OS_CRASH_FILE_LINE (0)
#endif

#ifndef MYNEWT_VAL_OS_CRASH_LOG
#define MYNEWT_VAL_OS_CRASH_LOG (0)
#endif

#ifndef MYNEWT_VAL_OS_CRASH_RESTORE_REGS
#define MYNEWT_VAL_OS_CRASH_RESTORE_REGS (0)
#endif

#ifndef MYNEWT_VAL_OS_CRASH_STACKTRACE
#define MYNEWT_VAL_OS_CRASH_STACKTRACE (0)
#endif

#ifndef MYNEWT_VAL_OS_CTX_SW_STACK_CHECK
#define MYNEWT_VAL_OS_CTX_SW_STACK_CHECK (0)
#endif

#ifndef MYNEWT_VAL_OS_CTX_SW_STACK_GUARD
#define MYNEWT_VAL_OS_CTX_SW_STACK_GUARD (4)
#endif

#ifndef MYNEWT_VAL_OS_DEBUG_MODE
#define MYNEWT_VAL_OS_DEBUG_MODE (0)
#endif

#ifndef MYNEWT_VAL_OS_EVENTQ_DEBUG
#define MYNEWT_VAL_OS_EVENTQ_DEBUG (0)
#endif

#ifndef MYNEWT_VAL_OS_EVENTQ_MONITOR
#define MYNEWT_VAL_OS_EVENTQ_MONITOR (0)
#endif

#ifndef MYNEWT_VAL_OS_IDLE_TICKLESS_MS_MAX
#define MYNEWT_VAL_OS_IDLE_TICKLESS_MS_MAX (600000)
#endif

#ifndef MYNEWT_VAL_OS_IDLE_TICKLESS_MS_MIN
#define MYNEWT_VAL_OS_IDLE_TICKLESS_MS_MIN (100)
#endif

#ifndef MYNEWT_VAL_OS_MAIN_STACK_SIZE
#define MYNEWT_VAL_OS_MAIN_STACK_SIZE (1024)
#endif

#ifndef MYNEWT_VAL_OS_MAIN_TASK_PRIO
#define MYNEWT_VAL_OS_MAIN_TASK_PRIO (127)
#endif

#ifndef MYNEWT_VAL_OS_MAIN_TASK_SANITY_ITVL_MS
#define MYNEWT_VAL_OS_MAIN_TASK_SANITY_ITVL_MS (0)
#endif

#ifndef MYNEWT_VAL_OS_MEMPOOL_CHECK
#define MYNEWT_VAL_OS_MEMPOOL_CHECK (0)
#endif

#ifndef MYNEWT_VAL_OS_MEMPOOL_GUARD
#define MYNEWT_VAL_OS_MEMPOOL_GUARD (0)
#endif

#ifndef MYNEWT_VAL_OS_MEMPOOL_POISON
#define MYNEWT_VAL_OS_MEMPOOL_POISON (0)
#endif

#ifndef MYNEWT_VAL_OS_SCHEDULING
#define MYNEWT_VAL_OS_SCHEDULING (1)
#endif

#ifndef MYNEWT_VAL_OS_SYSINIT_STAGE
#define MYNEWT_VAL_OS_SYSINIT_STAGE (0)
#endif

#ifndef MYNEWT_VAL_OS_SYSVIEW
#define MYNEWT_VAL_OS_SYSVIEW (0)
#endif

#ifndef MYNEWT_VAL_OS_SYSVIEW_TRACE_CALLOUT
#define MYNEWT_VAL_OS_SYSVIEW_TRACE_CALLOUT (1)
#endif

#ifndef MYNEWT_VAL_OS_SYSVIEW_TRACE_EVENTQ
#define MYNEWT_VAL_OS_SYSVIEW_TRACE_EVENTQ (1)
#endif

#ifndef MYNEWT_VAL_OS_SYSVIEW_TRACE_MBUF
#define MYNEWT_VAL_OS_SYSVIEW_TRACE_MBUF (0)
#endif

#ifndef MYNEWT_VAL_OS_SYSVIEW_TRACE_MEMPOOL
#define MYNEWT_VAL_OS_SYSVIEW_TRACE_MEMPOOL (0)
#endif

#ifndef MYNEWT_VAL_OS_SYSVIEW_TRACE_MUTEX
#define MYNEWT_VAL_OS_SYSVIEW_TRACE_MUTEX (1)
#endif

#ifndef MYNEWT_VAL_OS_SYSVIEW_TRACE_SEM
#define MYNEWT_VAL_OS_SYSVIEW_TRACE_SEM (1)
#endif

#ifndef MYNEWT_VAL_OS_TASK_RUN_TIME_CPUTIME
#define MYNEWT_VAL_OS_TASK_RUN_TIME_CPUTIME (0)
#endif

#ifndef MYNEWT_VAL_OS_TIME_DEBUG
#define MYNEWT_VAL_OS_TIME_DEBUG (0)
#endif

#ifndef MYNEWT_VAL_OS_WATCHDOG_MONITOR
#define MYNEWT_VAL_OS_WATCHDOG_MONITOR (0)
#endif

#ifndef MYNEWT_VAL_SANITY_INTERVAL
#define MYNEWT_VAL_SANITY_INTERVAL (15000)
#endif

#ifndef MYNEWT_VAL_WATCHDOG_INTERVAL
#define MYNEWT_VAL_WATCHDOG_INTERVAL (30000)
#endif

/*** @apache-mynewt-core/sys/console/stub */
#ifndef MYNEWT_VAL_CONSOLE_UART_BAUD
#define MYNEWT_VAL_CONSOLE_UART_BAUD (115200)
#endif

#ifndef MYNEWT_VAL_CONSOLE_UART_DEV
#define MYNEWT_VAL_CONSOLE_UART_DEV ("uart0")
#endif

#ifndef MYNEWT_VAL_CONSOLE_UART_FLOW_CONTROL
#define MYNEWT_VAL_CONSOLE_UART_FLOW_CONTROL (UART_FLOW_CTL_NONE)
#endif

/*** @apache-mynewt-core/sys/flash_map */
#ifndef MYNEWT_VAL_FLASH_MAP_MAX_AREAS
#define MYNEWT_VAL_FLASH_MAP_MAX_AREAS (10)
#endif

#ifndef MYNEWT_VAL_FLASH_MAP_SYSINIT_STAGE
#define MYNEWT_VAL_FLASH_MAP_SYSINIT_STAGE (2)
#endif

/*** @apache-mynewt-core/sys/log/common */
#ifndef MYNEWT_VAL_DFLT_LOG_LVL
#define MYNEWT_VAL_DFLT_LOG_LVL (1)
#endif

#ifndef MYNEWT_VAL_DFLT_LOG_MOD
#define MYNEWT_VAL_DFLT_LOG_MOD (0)
#endif

#ifndef MYNEWT_VAL_LOG_GLOBAL_IDX
#define MYNEWT_VAL_LOG_GLOBAL_IDX (1)
#endif

/*** @apache-mynewt-core/sys/log/modlog */
#ifndef MYNEWT_VAL_MODLOG_CONSOLE_DFLT
#define MYNEWT_VAL_MODLOG_CONSOLE_DFLT (1)
#endif

#ifndef MYNEWT_VAL_MODLOG_LOG_MACROS
#define MYNEWT_VAL_MODLOG_LOG_MACROS (0)
#endif

#ifndef MYNEWT_VAL_MODLOG_MAX_MAPPINGS
#define MYNEWT_VAL_MODLOG_MAX_MAPPINGS (16)
#endif

#ifndef MYNEWT_VAL_MODLOG_MAX_PRINTF_LEN
#define MYNEWT_VAL_MODLOG_MAX_PRINTF_LEN (128)
#endif

#ifndef MYNEWT_VAL_MODLOG_SYSINIT_STAGE
#define MYNEWT_VAL_MODLOG_SYSINIT_STAGE (100)
#endif

/*** @apache-mynewt-core/sys/log/stub */
#ifndef MYNEWT_VAL_LOG_CONSOLE
#define MYNEWT_VAL_LOG_CONSOLE (1)
#endif

#ifndef MYNEWT_VAL_LOG_FCB
#define MYNEWT_VAL_LOG_FCB (0)
#endif

#ifndef MYNEWT_VAL_LOG_FCB_SLOT1
#define MYNEWT_VAL_LOG_FCB_SLOT1 (0)
#endif

#ifndef MYNEWT_VAL_LOG_LEVEL
#define MYNEWT_VAL_LOG_LEVEL (255)
#endif

/*** @apache-mynewt-core/sys/mfg */
#ifndef MYNEWT_VAL_MFG_LOG_LVL
#define MYNEWT_VAL_MFG_LOG_LVL (15)
#endif

#ifndef MYNEWT_VAL_MFG_LOG_MODULE
#define MYNEWT_VAL_MFG_LOG_MODULE (128)
#endif

#ifndef MYNEWT_VAL_MFG_MAX_MMRS
#define MYNEWT_VAL_MFG_MAX_MMRS (2)
#endif

#ifndef MYNEWT_VAL_MFG_SYSINIT_STAGE
#define MYNEWT_VAL_MFG_SYSINIT_STAGE (100)
#endif

/*** @apache-mynewt-core/sys/sys */
#ifndef MYNEWT_VAL_DEBUG_PANIC_ENABLED
#define MYNEWT_VAL_DEBUG_PANIC_ENABLED (1)
#endif

/*** @apache-mynewt-core/sys/sysdown */
#ifndef MYNEWT_VAL_SYSDOWN_CONSTRAIN_DOWN
#define MYNEWT_VAL_SYSDOWN_CONSTRAIN_DOWN (1)
#endif

#ifndef MYNEWT_VAL_SYSDOWN_PANIC_FILE_LINE
#define MYNEWT_VAL_SYSDOWN_PANIC_FILE_LINE (0)
#endif

#ifndef MYNEWT_VAL_SYSDOWN_PANIC_MESSAGE
#define MYNEWT_VAL_SYSDOWN_PANIC_MESSAGE (0)
#endif

#ifndef MYNEWT_VAL_SYSDOWN_TIMEOUT_MS
#define MYNEWT_VAL_SYSDOWN_TIMEOUT_MS (10000)
#endif

/*** @apache-mynewt-core/sys/sysinit */
#ifndef MYNEWT_VAL_SYSINIT_CONSTRAIN_INIT
#define MYNEWT_VAL_SYSINIT_CONSTRAIN_INIT (1)
#endif

#ifndef MYNEWT_VAL_SYSINIT_PANIC_FILE_LINE
#define MYNEWT_VAL_SYSINIT_PANIC_FILE_LINE (0)
#endif

#ifndef MYNEWT_VAL_SYSINIT_PANIC_MESSAGE
#define MYNEWT_VAL_SYSINIT_PANIC_MESSAGE (0)
#endif

/*** @apache-mynewt-core/util/rwlock */
#ifndef MYNEWT_VAL_RWLOCK_DEBUG
#define MYNEWT_VAL_RWLOCK_DEBUG (0)
#endif

/*** @apache-mynewt-nimble/nimble */
#ifndef MYNEWT_VAL_BLE_EXT_ADV
#define MYNEWT_VAL_BLE_EXT_ADV (0)
#endif

#ifndef MYNEWT_VAL_BLE_EXT_ADV_MAX_SIZE
#define MYNEWT_VAL_BLE_EXT_ADV_MAX_SIZE (31)
#endif

#ifndef MYNEWT_VAL_BLE_ISO
#define MYNEWT_VAL_BLE_ISO (0)
#endif

#ifndef MYNEWT_VAL_BLE_ISO_TEST
#define MYNEWT_VAL_BLE_ISO_TEST (0)
#endif

#ifndef MYNEWT_VAL_BLE_MAX_CONNECTIONS
#define MYNEWT_VAL_BLE_MAX_CONNECTIONS (1)
#endif

#ifndef MYNEWT_VAL_BLE_MAX_PERIODIC_SYNCS
#define MYNEWT_VAL_BLE_MAX_PERIODIC_SYNCS (1)
#endif

#ifndef MYNEWT_VAL_BLE_MULTI_ADV_INSTANCES
#define MYNEWT_VAL_BLE_MULTI_ADV_INSTANCES (0)
#endif

#ifndef MYNEWT_VAL_BLE_PERIODIC_ADV
#define MYNEWT_VAL_BLE_PERIODIC_ADV (0)
#endif

#ifndef MYNEWT_VAL_BLE_PERIODIC_ADV_SYNC_TRANSFER
#define MYNEWT_VAL_BLE_PERIODIC_ADV_SYNC_TRANSFER (0)
#endif

#ifndef MYNEWT_VAL_BLE_ROLE_BROADCASTER
#define MYNEWT_VAL_BLE_ROLE_BROADCASTER (1)
#endif

#ifndef MYNEWT_VAL_BLE_ROLE_CENTRAL
#define MYNEWT_VAL_BLE_ROLE_CENTRAL (1)
#endif

#ifndef MYNEWT_VAL_BLE_ROLE_OBSERVER
#define MYNEWT_VAL_BLE_ROLE_OBSERVER (1)
#endif

#ifndef MYNEWT_VAL_BLE_ROLE_PERIPHERAL
#define MYNEWT_VAL_BLE_ROLE_PERIPHERAL (1)
#endif

#ifndef MYNEWT_VAL_BLE_VERSION
#define MYNEWT_VAL_BLE_VERSION (50)
#endif

#ifndef MYNEWT_VAL_BLE_WHITELIST
#define MYNEWT_VAL_BLE_WHITELIST (1)
#endif

/*** @apache-mynewt-nimble/nimble/host */
#ifndef MYNEWT_VAL_BLE_ATT_PREFERRED_MTU
#define MYNEWT_VAL_BLE_ATT_PREFERRED_MTU (256)
#endif

#ifndef MYNEWT_VAL_BLE_ATT_SVR_FIND_INFO
#define MYNEWT_VAL_BLE_ATT_SVR_FIND_INFO (1)
#endif

#ifndef MYNEWT_VAL_BLE_ATT_SVR_FIND_TYPE
#define MYNEWT_VAL_BLE_ATT_SVR_FIND_TYPE (1)
#endif

#ifndef MYNEWT_VAL_BLE_ATT_SVR_INDICATE
#define MYNEWT_VAL_BLE_ATT_SVR_INDICATE (1)
#endif

#ifndef MYNEWT_VAL_BLE_ATT_SVR_MAX_PREP_ENTRIES
#define MYNEWT_VAL_BLE_ATT_SVR_MAX_PREP_ENTRIES (64)
#endif

#ifndef MYNEWT_VAL_BLE_ATT_SVR_NOTIFY
#define MYNEWT_VAL_BLE_ATT_SVR_NOTIFY (1)
#endif

#ifndef MYNEWT_VAL_BLE_ATT_SVR_QUEUED_WRITE
#define MYNEWT_VAL_BLE_ATT_SVR_QUEUED_WRITE (1)
#endif

#ifndef MYNEWT_VAL_BLE_ATT_SVR_QUEUED_WRITE_TMO
#define MYNEWT_VAL_BLE_ATT_SVR_QUEUED_WRITE_TMO (30000)
#endif

#ifndef MYNEWT_VAL_BLE_ATT_SVR_READ
#define MYNEWT_VAL_BLE_ATT_SVR_READ (1)
#endif

#ifndef MYNEWT_VAL_BLE_ATT_SVR_READ_BLOB
#define MYNEWT_VAL_BLE_ATT_SVR_READ_BLOB (1)
#endif

#ifndef MYNEWT_VAL_BLE_ATT_SVR_READ_GROUP_TYPE
#define MYNEWT_VAL_BLE_ATT_SVR_READ_GROUP_TYPE (1)
#endif

#ifndef MYNEWT_VAL_BLE_ATT_SVR_READ_MULT
#define MYNEWT_VAL_BLE_ATT_SVR_READ_MULT (1)
#endif

#ifndef MYNEWT_VAL_BLE_ATT_SVR_READ_TYPE
#define MYNEWT_VAL_BLE_ATT_SVR_READ_TYPE (1)
#endif

#ifndef MYNEWT_VAL_BLE_ATT_SVR_SIGNED_WRITE
#define MYNEWT_VAL_BLE_ATT_SVR_SIGNED_WRITE (1)
#endif

#ifndef MYNEWT_VAL_BLE_ATT_SVR_WRITE
#define MYNEWT_VAL_BLE_ATT_SVR_WRITE (1)
#endif

#ifndef MYNEWT_VAL_BLE_ATT_SVR_WRITE_NO_RSP
#define MYNEWT_VAL_BLE_ATT_SVR_WRITE_NO_RSP (1)
#endif

#ifndef MYNEWT_VAL_BLE_GAP_MAX_PENDING_CONN_PARAM_UPDATE
#define MYNEWT_VAL_BLE_GAP_MAX_PENDING_CONN_PARAM_UPDATE (1)
#endif

#ifndef MYNEWT_VAL_BLE_GATT_DISC_ALL_CHRS
#define MYNEWT_VAL_BLE_GATT_DISC_ALL_CHRS (MYNEWT_VAL_BLE_ROLE_CENTRAL)
#endif

#ifndef MYNEWT_VAL_BLE_GATT_DISC_ALL_DSCS
#define MYNEWT_VAL_BLE_GATT_DISC_ALL_DSCS (MYNEWT_VAL_BLE_ROLE_CENTRAL)
#endif

#ifndef MYNEWT_VAL_BLE_GATT_DISC_ALL_SVCS
#define MYNEWT_VAL_BLE_GATT_DISC_ALL_SVCS (MYNEWT_VAL_BLE_ROLE_CENTRAL)
#endif

#ifndef MYNEWT_VAL_BLE_GATT_DISC_CHR_UUID
#define MYNEWT_VAL_BLE_GATT_DISC_CHR_UUID (MYNEWT_VAL_BLE_ROLE_CENTRAL)
#endif

#ifndef MYNEWT_VAL_BLE_GATT_DISC_SVC_UUID
#define MYNEWT_VAL_BLE_GATT_DISC_SVC_UUID (MYNEWT_VAL_BLE_ROLE_CENTRAL)
#endif

#ifndef MYNEWT_VAL_BLE_GATT_FIND_INC_SVCS
#define MYNEWT_VAL_BLE_GATT_FIND_INC_SVCS (MYNEWT_VAL_BLE_ROLE_CENTRAL)
#endif

#ifndef MYNEWT_VAL_BLE_GATT_INDICATE
#define MYNEWT_VAL_BLE_GATT_INDICATE (1)
#endif

#ifndef MYNEWT_VAL_BLE_GATT_MAX_PROCS
#define MYNEWT_VAL_BLE_GATT_MAX_PROCS (4)
#endif

#ifndef MYNEWT_VAL_BLE_GATT_NOTIFY
#define MYNEWT_VAL_BLE_GATT_NOTIFY (1)
#endif

#ifndef MYNEWT_VAL_BLE_GATT_READ
#define MYNEWT_VAL_BLE_GATT_READ (MYNEWT_VAL_BLE_ROLE_CENTRAL)
#endif

#ifndef MYNEWT_VAL_BLE_GATT_READ_LONG
#define MYNEWT_VAL_BLE_GATT_READ_LONG (MYNEWT_VAL_BLE_ROLE_CENTRAL)
#endif

#ifndef MYNEWT_VAL_BLE_GATT_READ_MAX_ATTRS
#define MYNEWT_VAL_BLE_GATT_READ_MAX_ATTRS (8)
#endif

#ifndef MYNEWT_VAL_BLE_GATT_READ_MULT
#define MYNEWT_VAL_BLE_GATT_READ_MULT (MYNEWT_VAL_BLE_ROLE_CENTRAL)
#endif

#ifndef MYNEWT_VAL_BLE_GATT_READ_UUID
#define MYNEWT_VAL_BLE_GATT_READ_UUID (MYNEWT_VAL_BLE_ROLE_CENTRAL)
#endif

#ifndef MYNEWT_VAL_BLE_GATT_RESUME_RATE
#define MYNEWT_VAL_BLE_GATT_RESUME_RATE (1000)
#endif

#ifndef MYNEWT_VAL_BLE_GATT_SIGNED_WRITE
#define MYNEWT_VAL_BLE_GATT_SIGNED_WRITE (MYNEWT_VAL_BLE_ROLE_CENTRAL)
#endif

#ifndef MYNEWT_VAL_BLE_GATT_WRITE
#define MYNEWT_VAL_BLE_GATT_WRITE (MYNEWT_VAL_BLE_ROLE_CENTRAL)
#endif

#ifndef MYNEWT_VAL_BLE_GATT_WRITE_LONG
#define MYNEWT_VAL_BLE_GATT_WRITE_LONG (MYNEWT_VAL_BLE_ROLE_CENTRAL)
#endif

#ifndef MYNEWT_VAL_BLE_GATT_WRITE_MAX_ATTRS
#define MYNEWT_VAL_BLE_GATT_WRITE_MAX_ATTRS (4)
#endif

#ifndef MYNEWT_VAL_BLE_GATT_WRITE_NO_RSP
#define MYNEWT_VAL_BLE_GATT_WRITE_NO_RSP (MYNEWT_VAL_BLE_ROLE_CENTRAL)
#endif

#ifndef MYNEWT_VAL_BLE_GATT_WRITE_RELIABLE
#define MYNEWT_VAL_BLE_GATT_WRITE_RELIABLE (MYNEWT_VAL_BLE_ROLE_CENTRAL)
#endif

#ifndef MYNEWT_VAL_BLE_HOST
#define MYNEWT_VAL_BLE_HOST (1)
#endif

#ifndef MYNEWT_VAL_BLE_HS_AUTO_START
#define MYNEWT_VAL_BLE_HS_AUTO_START (1)
#endif

#ifndef MYNEWT_VAL_BLE_HS_DEBUG
#define MYNEWT_VAL_BLE_HS_DEBUG (0)
#endif

#ifndef MYNEWT_VAL_BLE_HS_FLOW_CTRL
#define MYNEWT_VAL_BLE_HS_FLOW_CTRL (0)
#endif

#ifndef MYNEWT_VAL_BLE_HS_FLOW_CTRL_ITVL
#define MYNEWT_VAL_BLE_HS_FLOW_CTRL_ITVL (1000)
#endif

#ifndef MYNEWT_VAL_BLE_HS_FLOW_CTRL_THRESH
#define MYNEWT_VAL_BLE_HS_FLOW_CTRL_THRESH (2)
#endif

#ifndef MYNEWT_VAL_BLE_HS_FLOW_CTRL_TX_ON_DISCONNECT
#define MYNEWT_VAL_BLE_HS_FLOW_CTRL_TX_ON_DISCONNECT (0)
#endif

#ifndef MYNEWT_VAL_BLE_HS_LOG_LVL
#define MYNEWT_VAL_BLE_HS_LOG_LVL (1)
#endif

#ifndef MYNEWT_VAL_BLE_HS_LOG_MOD
#define MYNEWT_VAL_BLE_HS_LOG_MOD (4)
#endif

#ifndef MYNEWT_VAL_BLE_HS_PHONY_HCI_ACKS
#define MYNEWT_VAL_BLE_HS_PHONY_HCI_ACKS (0)
#endif

#ifndef MYNEWT_VAL_BLE_HS_REQUIRE_OS
#define MYNEWT_VAL_BLE_HS_REQUIRE_OS (1)
#endif

#ifndef MYNEWT_VAL_BLE_HS_STOP_ON_SHUTDOWN
#define MYNEWT_VAL_BLE_HS_STOP_ON_SHUTDOWN (1)
#endif

#ifndef MYNEWT_VAL_BLE_HS_STOP_ON_SHUTDOWN_TIMEOUT
#define MYNEWT_VAL_BLE_HS_STOP_ON_SHUTDOWN_TIMEOUT (2000)
#endif

#ifndef MYNEWT_VAL_BLE_HS_SYSINIT_STAGE
#define MYNEWT_VAL_BLE_HS_SYSINIT_STAGE (200)
#endif

#ifndef MYNEWT_VAL_BLE_L2CAP_COC_MAX_NUM
#define MYNEWT_VAL_BLE_L2CAP_COC_MAX_NUM (0)
#endif

#ifndef MYNEWT_VAL_BLE_L2CAP_COC_MPS
#define MYNEWT_VAL_BLE_L2CAP_COC_MPS (MYNEWT_VAL_MSYS_1_BLOCK_SIZE-8)
#endif

#ifndef MYNEWT_VAL_BLE_L2CAP_ENHANCED_COC
#define MYNEWT_VAL_BLE_L2CAP_ENHANCED_COC (0)
#endif

#ifndef MYNEWT_VAL_BLE_L2CAP_JOIN_RX_FRAGS
#define MYNEWT_VAL_BLE_L2CAP_JOIN_RX_FRAGS (1)
#endif

#ifndef MYNEWT_VAL_BLE_L2CAP_MAX_CHANS
#define MYNEWT_VAL_BLE_L2CAP_MAX_CHANS (3*MYNEWT_VAL_BLE_MAX_CONNECTIONS)
#endif

#ifndef MYNEWT_VAL_BLE_L2CAP_RX_FRAG_TIMEOUT
#define MYNEWT_VAL_BLE_L2CAP_RX_FRAG_TIMEOUT (30000)
#endif

#ifndef MYNEWT_VAL_BLE_L2CAP_SIG_MAX_PROCS
#define MYNEWT_VAL_BLE_L2CAP_SIG_MAX_PROCS (1)
#endif

#ifndef MYNEWT_VAL_BLE_MESH
#define MYNEWT_VAL_BLE_MESH (0)
#endif

#ifndef MYNEWT_VAL_BLE_MONITOR_CONSOLE_BUFFER_SIZE
#define MYNEWT_VAL_BLE_MONITOR_CONSOLE_BUFFER_SIZE (128)
#endif

#ifndef MYNEWT_VAL_BLE_MONITOR_RTT
#define MYNEWT_VAL_BLE_MONITOR_RTT (0)
#endif

#ifndef MYNEWT_VAL_BLE_MONITOR_RTT_BUFFERED
#define MYNEWT_VAL_BLE_MONITOR_RTT_BUFFERED (0)
#endif

#ifndef MYNEWT_VAL_BLE_MONITOR_RTT_BUFFER_NAME
#define MYNEWT_VAL_BLE_MONITOR_RTT_BUFFER_NAME ("btmonitor")
#endif

#ifndef MYNEWT_VAL_BLE_MONITOR_RTT_BUFFER_SIZE
#define MYNEWT_VAL_BLE_MONITOR_RTT_BUFFER_SIZE (256)
#endif

#ifndef MYNEWT_VAL_BLE_MONITOR_UART
#define MYNEWT_VAL_BLE_MONITOR_UART (0)
#endif

#ifndef MYNEWT_VAL_BLE_MONITOR_UART_BAUDRATE
#define MYNEWT_VAL_BLE_MONITOR_UART_BAUDRATE (1000000)
#endif

#ifndef MYNEWT_VAL_BLE_MONITOR_UART_BUFFER_SIZE
#define MYNEWT_VAL_BLE_MONITOR_UART_BUFFER_SIZE (64)
#endif

#ifndef MYNEWT_VAL_BLE_MONITOR_UART_DEV
#define MYNEWT_VAL_BLE_MONITOR_UART_DEV ("uart0")
#endif

#ifndef MYNEWT_VAL_BLE_RPA_TIMEOUT
#define MYNEWT_VAL_BLE_RPA_TIMEOUT (300)
#endif

#ifndef MYNEWT_VAL_BLE_SM_BONDING
#define MYNEWT_VAL_BLE_SM_BONDING (1)
#endif

#ifndef MYNEWT_VAL_BLE_SM_IO_CAP
#define MYNEWT_VAL_BLE_SM_IO_CAP (BLE_HS_IO_DISPLAY_ONLY)
#endif

#ifndef MYNEWT_VAL_BLE_SM_KEYPRESS
#define MYNEWT_VAL_BLE_SM_KEYPRESS (0)
#endif

#ifndef MYNEWT_VAL_BLE_SM_LEGACY
#define MYNEWT_VAL_BLE_SM_LEGACY (0)
#endif

#ifndef MYNEWT_VAL_BLE_SM_MAX_PROCS
#define MYNEWT_VAL_BLE_SM_MAX_PROCS (1)
#endif

#ifndef MYNEWT_VAL_BLE_SM_MITM
#define MYNEWT_VAL_BLE_SM_MITM (1)
#endif

#ifndef MYNEWT_VAL_BLE_SM_OOB_DATA_FLAG
#define MYNEWT_VAL_BLE_SM_OOB_DATA_FLAG (0)
#endif

#ifndef MYNEWT_VAL_BLE_SM_OUR_KEY_DIST
#define MYNEWT_VAL_BLE_SM_OUR_KEY_DIST (7)
#endif

#ifndef MYNEWT_VAL_BLE_SM_SC
#define MYNEWT_VAL_BLE_SM_SC (1)
#endif

#ifndef MYNEWT_VAL_BLE_SM_SC_DEBUG_KEYS
#define MYNEWT_VAL_BLE_SM_SC_DEBUG_KEYS (0)
#endif

#ifndef MYNEWT_VAL_BLE_SM_THEIR_KEY_DIST
#define MYNEWT_VAL_BLE_SM_THEIR_KEY_DIST (3)
#endif

#ifndef MYNEWT_VAL_BLE_STORE_MAX_BONDS
#define MYNEWT_VAL_BLE_STORE_MAX_BONDS (3)
#endif

#ifndef MYNEWT_VAL_BLE_STORE_MAX_CCCDS
#define MYNEWT_VAL_BLE_STORE_MAX_CCCDS (8)
#endif

/*** @apache-mynewt-nimble/nimble/host/services/ans */
#ifndef MYNEWT_VAL_BLE_SVC_ANS_NEW_ALERT_CAT
#define MYNEWT_VAL_BLE_SVC_ANS_NEW_ALERT_CAT (0)
#endif

#ifndef MYNEWT_VAL_BLE_SVC_ANS_SYSINIT_STAGE
#define MYNEWT_VAL_BLE_SVC_ANS_SYSINIT_STAGE (303)
#endif

#ifndef MYNEWT_VAL_BLE_SVC_ANS_UNR_ALERT_CAT
#define MYNEWT_VAL_BLE_SVC_ANS_UNR_ALERT_CAT (0)
#endif

/*** @apache-mynewt-nimble/nimble/host/services/bas */
#ifndef MYNEWT_VAL_BLE_SVC_BAS_BATTERY_LEVEL_NOTIFY_ENABLE
#define MYNEWT_VAL_BLE_SVC_BAS_BATTERY_LEVEL_NOTIFY_ENABLE (1)
#endif

#ifndef MYNEWT_VAL_BLE_SVC_BAS_BATTERY_LEVEL_READ_PERM
#define MYNEWT_VAL_BLE_SVC_BAS_BATTERY_LEVEL_READ_PERM (0)
#endif

#ifndef MYNEWT_VAL_BLE_SVC_BAS_SYSINIT_STAGE
#define MYNEWT_VAL_BLE_SVC_BAS_SYSINIT_STAGE (303)
#endif

/*** @apache-mynewt-nimble/nimble/host/services/dis */
#ifndef MYNEWT_VAL_BLE_SVC_DIS_DEFAULT_READ_PERM
#define MYNEWT_VAL_BLE_SVC_DIS_DEFAULT_READ_PERM (-1)
#endif

#ifndef MYNEWT_VAL_BLE_SVC_DIS_FIRMWARE_REVISION_DEFAULT
#define MYNEWT_VAL_BLE_SVC_DIS_FIRMWARE_REVISION_DEFAULT (NULL)
#endif

/* Value copied from BLE_SVC_DIS_DEFAULT_READ_PERM */
#ifndef MYNEWT_VAL_BLE_SVC_DIS_FIRMWARE_REVISION_READ_PERM
#define MYNEWT_VAL_BLE_SVC_DIS_FIRMWARE_REVISION_READ_PERM (-1)
#endif

#ifndef MYNEWT_VAL_BLE_SVC_DIS_HARDWARE_REVISION_DEFAULT
#define MYNEWT_VAL_BLE_SVC_DIS_HARDWARE_REVISION_DEFAULT (NULL)
#endif

/* Value copied from BLE_SVC_DIS_DEFAULT_READ_PERM */
#ifndef MYNEWT_VAL_BLE_SVC_DIS_HARDWARE_REVISION_READ_PERM
#define MYNEWT_VAL_BLE_SVC_DIS_HARDWARE_REVISION_READ_PERM (-1)
#endif

#ifndef MYNEWT_VAL_BLE_SVC_DIS_MANUFACTURER_NAME_DEFAULT
#define MYNEWT_VAL_BLE_SVC_DIS_MANUFACTURER_NAME_DEFAULT (NULL)
#endif

/* Value copied from BLE_SVC_DIS_DEFAULT_READ_PERM */
#ifndef MYNEWT_VAL_BLE_SVC_DIS_MANUFACTURER_NAME_READ_PERM
#define MYNEWT_VAL_BLE_SVC_DIS_MANUFACTURER_NAME_READ_PERM (-1)
#endif

#ifndef MYNEWT_VAL_BLE_SVC_DIS_MODEL_NUMBER_DEFAULT
#define MYNEWT_VAL_BLE_SVC_DIS_MODEL_NUMBER_DEFAULT ("Apache Mynewt NimBLE")
#endif

#ifndef MYNEWT_VAL_BLE_SVC_DIS_MODEL_NUMBER_READ_PERM
#define MYNEWT_VAL_BLE_SVC_DIS_MODEL_NUMBER_READ_PERM (0)
#endif

#ifndef MYNEWT_VAL_BLE_SVC_DIS_SERIAL_NUMBER_DEFAULT
#define MYNEWT_VAL_BLE_SVC_DIS_SERIAL_NUMBER_DEFAULT (NULL)
#endif

/* Value copied from BLE_SVC_DIS_DEFAULT_READ_PERM */
#ifndef MYNEWT_VAL_BLE_SVC_DIS_SERIAL_NUMBER_READ_PERM
#define MYNEWT_VAL_BLE_SVC_DIS_SERIAL_NUMBER_READ_PERM (-1)
#endif

#ifndef MYNEWT_VAL_BLE_SVC_DIS_SOFTWARE_REVISION_DEFAULT
#define MYNEWT_VAL_BLE_SVC_DIS_SOFTWARE_REVISION_DEFAULT (NULL)
#endif

/* Value copied from BLE_SVC_DIS_DEFAULT_READ_PERM */
#ifndef MYNEWT_VAL_BLE_SVC_DIS_SOFTWARE_REVISION_READ_PERM
#define MYNEWT_VAL_BLE_SVC_DIS_SOFTWARE_REVISION_READ_PERM (-1)
#endif

#ifndef MYNEWT_VAL_BLE_SVC_DIS_SYSINIT_STAGE
#define MYNEWT_VAL_BLE_SVC_DIS_SYSINIT_STAGE (303)
#endif

#ifndef MYNEWT_VAL_BLE_SVC_DIS_SYSTEM_ID_DEFAULT
#define MYNEWT_VAL_BLE_SVC_DIS_SYSTEM_ID_DEFAULT (NULL)
#endif

/* Value copied from BLE_SVC_DIS_DEFAULT_READ_PERM */
#ifndef MYNEWT_VAL_BLE_SVC_DIS_SYSTEM_ID_READ_PERM
#define MYNEWT_VAL_BLE_SVC_DIS_SYSTEM_ID_READ_PERM (-1)
#endif

/*** @apache-mynewt-nimble/nimble/host/services/gap */
#ifndef MYNEWT_VAL_BLE_SVC_GAP_APPEARANCE
#define MYNEWT_VAL_BLE_SVC_GAP_APPEARANCE (0)
#endif

#ifndef MYNEWT_VAL_BLE_SVC_GAP_APPEARANCE_WRITE_PERM
#define MYNEWT_VAL_BLE_SVC_GAP_APPEARANCE_WRITE_PERM (-1)
#endif

#ifndef MYNEWT_VAL_BLE_SVC_GAP_CENTRAL_ADDRESS_RESOLUTION
#define MYNEWT_VAL_BLE_SVC_GAP_CENTRAL_ADDRESS_RESOLUTION (-1)
#endif

#ifndef MYNEWT_VAL_BLE_SVC_GAP_DEVICE_NAME
#define MYNEWT_VAL_BLE_SVC_GAP_DEVICE_NAME ("nimble")
#endif

#ifndef MYNEWT_VAL_BLE_SVC_GAP_DEVICE_NAME_MAX_LENGTH
#define MYNEWT_VAL_BLE_SVC_GAP_DEVICE_NAME_MAX_LENGTH (31)
#endif

#ifndef MYNEWT_VAL_BLE_SVC_GAP_DEVICE_NAME_WRITE_PERM
#define MYNEWT_VAL_BLE_SVC_GAP_DEVICE_NAME_WRITE_PERM (-1)
#endif

#ifndef MYNEWT_VAL_BLE_SVC_GAP_PPCP_MAX_CONN_INTERVAL
#define MYNEWT_VAL_BLE_SVC_GAP_PPCP_MAX_CONN_INTERVAL (0)
#endif

#ifndef MYNEWT_VAL_BLE_SVC_GAP_PPCP_MIN_CONN_INTERVAL
#define MYNEWT_VAL_BLE_SVC_GAP_PPCP_MIN_CONN_INTERVAL (0)
#endif

#ifndef MYNEWT_VAL_BLE_SVC_GAP_PPCP_SLAVE_LATENCY
#define MYNEWT_VAL_BLE_SVC_GAP_PPCP_SLAVE_LATENCY (0)
#endif

#ifndef MYNEWT_VAL_BLE_SVC_GAP_PPCP_SUPERVISION_TMO
#define MYNEWT_VAL_BLE_SVC_GAP_PPCP_SUPERVISION_TMO (0)
#endif

#ifndef MYNEWT_VAL_BLE_SVC_GAP_SYSINIT_STAGE
#define MYNEWT_VAL_BLE_SVC_GAP_SYSINIT_STAGE (301)
#endif

/*** @apache-mynewt-nimble/nimble/host/services/gatt */
#ifndef MYNEWT_VAL_BLE_SVC_GATT_SYSINIT_STAGE
#define MYNEWT_VAL_BLE_SVC_GATT_SYSINIT_STAGE (302)
#endif

/*** @apache-mynewt-nimble/nimble/host/services/ias */
#ifndef MYNEWT_VAL_BLE_SVC_IAS_SYSINIT_STAGE
#define MYNEWT_VAL_BLE_SVC_IAS_SYSINIT_STAGE (303)
#endif

/*** @apache-mynewt-nimble/nimble/host/services/ipss */
#ifndef MYNEWT_VAL_BLE_SVC_IPSS_SYSINIT_STAGE
#define MYNEWT_VAL_BLE_SVC_IPSS_SYSINIT_STAGE (303)
#endif

/*** @apache-mynewt-nimble/nimble/host/services/lls */
#ifndef MYNEWT_VAL_BLE_SVC_LLS_SYSINIT_STAGE
#define MYNEWT_VAL_BLE_SVC_LLS_SYSINIT_STAGE (303)
#endif

/*** @apache-mynewt-nimble/nimble/host/services/tps */
#ifndef MYNEWT_VAL_BLE_SVC_TPS_SYSINIT_STAGE
#define MYNEWT_VAL_BLE_SVC_TPS_SYSINIT_STAGE (303)
#endif

/*** @apache-mynewt-nimble/nimble/transport/socket */
#ifndef MYNEWT_VAL_BLE_ACL_BUF_COUNT
#define MYNEWT_VAL_BLE_ACL_BUF_COUNT (24)
#endif

#ifndef MYNEWT_VAL_BLE_ACL_BUF_SIZE
#define MYNEWT_VAL_BLE_ACL_BUF_SIZE (255)
#endif

#ifndef MYNEWT_VAL_BLE_HCI_ACL_OUT_COUNT
#define MYNEWT_VAL_BLE_HCI_ACL_OUT_COUNT (12)
#endif

#ifndef MYNEWT_VAL_BLE_HCI_EVT_BUF_SIZE
#define MYNEWT_VAL_BLE_HCI_EVT_BUF_SIZE (70)
#endif

#ifndef MYNEWT_VAL_BLE_HCI_EVT_HI_BUF_COUNT
#define MYNEWT_VAL_BLE_HCI_EVT_HI_BUF_COUNT (8)
#endif

#ifndef MYNEWT_VAL_BLE_HCI_EVT_LO_BUF_COUNT
#define MYNEWT_VAL_BLE_HCI_EVT_LO_BUF_COUNT (8)
#endif

#ifndef MYNEWT_VAL_BLE_SOCK_CLI_SYSINIT_STAGE
#define MYNEWT_VAL_BLE_SOCK_CLI_SYSINIT_STAGE (500)
#endif

#ifndef MYNEWT_VAL_BLE_SOCK_LINUX_DEV
#define MYNEWT_VAL_BLE_SOCK_LINUX_DEV (0)
#endif

#ifndef MYNEWT_VAL_BLE_SOCK_STACK_SIZE
#define MYNEWT_VAL_BLE_SOCK_STACK_SIZE (80)
#endif

#ifndef MYNEWT_VAL_BLE_SOCK_TASK_PRIO
#define MYNEWT_VAL_BLE_SOCK_TASK_PRIO (9)
#endif

#ifndef MYNEWT_VAL_BLE_SOCK_TCP_PORT
#define MYNEWT_VAL_BLE_SOCK_TCP_PORT (14433)
#endif

#ifndef MYNEWT_VAL_BLE_SOCK_USE_LINUX_BLUE
#define MYNEWT_VAL_BLE_SOCK_USE_LINUX_BLUE (0)
#endif

#ifndef MYNEWT_VAL_BLE_SOCK_USE_TCP
#define MYNEWT_VAL_BLE_SOCK_USE_TCP (1)
#endif

/*** newt */
#ifndef MYNEWT_VAL_APP_NAME
#define MYNEWT_VAL_APP_NAME ("dummy_app")
#endif

#ifndef MYNEWT_VAL_APP_dummy_app
#define MYNEWT_VAL_APP_dummy_app (1)
#endif

#ifndef MYNEWT_VAL_ARCH_NAME
#define MYNEWT_VAL_ARCH_NAME ("dummy")
#endif

#ifndef MYNEWT_VAL_ARCH_dummy
#define MYNEWT_VAL_ARCH_dummy (1)
#endif

#ifndef MYNEWT_VAL_BSP_NAME
#define MYNEWT_VAL_BSP_NAME ("dummy_bsp")
#endif

#ifndef MYNEWT_VAL_BSP_dummy_bsp
#define MYNEWT_VAL_BSP_dummy_bsp (1)
#endif

#ifndef MYNEWT_VAL_NEWT_FEATURE_LOGCFG
#define MYNEWT_VAL_NEWT_FEATURE_LOGCFG (1)
#endif

#ifndef MYNEWT_VAL_NEWT_FEATURE_SYSDOWN
#define MYNEWT_VAL_NEWT_FEATURE_SYSDOWN (1)
#endif

#ifndef MYNEWT_VAL_TARGET_NAME
#define MYNEWT_VAL_TARGET_NAME ("porting_default")
#endif

#ifndef MYNEWT_VAL_TARGET_porting_default
#define MYNEWT_VAL_TARGET_porting_default (1)
#endif

#ifndef MYNEWT_VAL_BLE_LL_TX_PWR_DBM
#define MYNEWT_VAL_BLE_LL_TX_PWR_DBM (0)
#endif

#ifndef MYNEWT_VAL_BLE_PUBLIC_DEV_ADDR
#define MYNEWT_VAL_BLE_PUBLIC_DEV_ADDR ((uint8_t[6]){0x00, 0x00, 0x00, 0x00, 0x00, 0x00})
#endif

/*** @apache-mynewt-nimble/nimble/controller */
#ifndef MYNEWT_VAL_BLE_CONTROLLER
#define MYNEWT_VAL_BLE_CONTROLLER (1)
#endif

#ifndef MYNEWT_VAL_BLE_DEVICE
#define MYNEWT_VAL_BLE_DEVICE (1)
#endif

/* Overridden by @apache-mynewt-nimble/targets/riot (defined by @apache-mynewt-nimble/nimble/controller) */
#ifndef MYNEWT_VAL_BLE_HW_WHITELIST_ENABLE
#define MYNEWT_VAL_BLE_HW_WHITELIST_ENABLE (0)
#endif

#ifndef MYNEWT_VAL_BLE_LL_ADD_STRICT_SCHED_PERIODS
#define MYNEWT_VAL_BLE_LL_ADD_STRICT_SCHED_PERIODS (0)
#endif

#ifndef MYNEWT_VAL_BLE_LL_CFG_FEAT_CONN_PARAM_REQ
#define MYNEWT_VAL_BLE_LL_CFG_FEAT_CONN_PARAM_REQ (1)
#endif

/* Overridden by @apache-mynewt-nimble/targets/riot (defined by @apache-mynewt-nimble/nimble/controller) */
#ifndef MYNEWT_VAL_BLE_LL_CFG_FEAT_DATA_LEN_EXT
#define MYNEWT_VAL_BLE_LL_CFG_FEAT_DATA_LEN_EXT (0)
#endif

#ifndef MYNEWT_VAL_BLE_LL_CFG_FEAT_EXT_SCAN_FILT
#define MYNEWT_VAL_BLE_LL_CFG_FEAT_EXT_SCAN_FILT (0)
#endif

#ifndef MYNEWT_VAL_BLE_LL_CFG_FEAT_LE_2M_PHY
#define MYNEWT_VAL_BLE_LL_CFG_FEAT_LE_2M_PHY (0)
#endif

#ifndef MYNEWT_VAL_BLE_LL_CFG_FEAT_LE_CODED_PHY
#define MYNEWT_VAL_BLE_LL_CFG_FEAT_LE_CODED_PHY (0)
#endif

/* Overridden by @apache-mynewt-nimble/targets/riot (defined by @apache-mynewt-nimble/nimble/controller) */
#ifndef MYNEWT_VAL_BLE_LL_CFG_FEAT_LE_CSA2
#define MYNEWT_VAL_BLE_LL_CFG_FEAT_LE_CSA2 (1)
#endif

/* Overridden by @apache-mynewt-nimble/targets/riot (defined by @apache-mynewt-nimble/nimble/controller) */
#ifndef MYNEWT_VAL_BLE_LL_CFG_FEAT_LE_ENCRYPTION
#define MYNEWT_VAL_BLE_LL_CFG_FEAT_LE_ENCRYPTION (1)
#endif

#ifndef MYNEWT_VAL_BLE_LL_CFG_FEAT_LE_PING
#define MYNEWT_VAL_BLE_LL_CFG_FEAT_LE_PING (MYNEWT_VAL_BLE_LL_CFG_FEAT_LE_ENCRYPTION)
#endif

/* Value copied from BLE_EXT_ADV */
#ifndef MYNEWT_VAL_BLE_LL_CFG_FEAT_LL_EXT_ADV
#define MYNEWT_VAL_BLE_LL_CFG_FEAT_LL_EXT_ADV (0)
#endif

/* Value copied from BLE_PERIODIC_ADV */
#ifndef MYNEWT_VAL_BLE_LL_CFG_FEAT_LL_PERIODIC_ADV
#define MYNEWT_VAL_BLE_LL_CFG_FEAT_LL_PERIODIC_ADV (0)
#endif

/* Value copied from BLE_MAX_PERIODIC_SYNCS */
#ifndef MYNEWT_VAL_BLE_LL_CFG_FEAT_LL_PERIODIC_ADV_SYNC_CNT
#define MYNEWT_VAL_BLE_LL_CFG_FEAT_LL_PERIODIC_ADV_SYNC_CNT (0)
#endif

/* Overridden by @apache-mynewt-nimble/targets/riot (defined by @apache-mynewt-nimble/nimble/controller) */
#ifndef MYNEWT_VAL_BLE_LL_CFG_FEAT_LL_PRIVACY
#define MYNEWT_VAL_BLE_LL_CFG_FEAT_LL_PRIVACY (1)
#endif

#ifndef MYNEWT_VAL_BLE_LL_CFG_FEAT_SLAVE_INIT_FEAT_XCHG
#define MYNEWT_VAL_BLE_LL_CFG_FEAT_SLAVE_INIT_FEAT_XCHG (1)
#endif

/* Overridden by @apache-mynewt-nimble/targets/riot (defined by @apache-mynewt-nimble/nimble/controller) */
#ifndef MYNEWT_VAL_BLE_LL_CONN_INIT_MAX_TX_BYTES
#define MYNEWT_VAL_BLE_LL_CONN_INIT_MAX_TX_BYTES (MYNEWT_VAL_BLE_LL_MAX_PKT_SIZE)
#endif

#ifndef MYNEWT_VAL_BLE_LL_CONN_INIT_MIN_WIN_OFFSET
#define MYNEWT_VAL_BLE_LL_CONN_INIT_MIN_WIN_OFFSET (0)
#endif

#ifndef MYNEWT_VAL_BLE_LL_CONN_INIT_SLOTS
#define MYNEWT_VAL_BLE_LL_CONN_INIT_SLOTS (4)
#endif

#ifndef MYNEWT_VAL_BLE_LL_DBG_HCI_CMD_PIN
#define MYNEWT_VAL_BLE_LL_DBG_HCI_CMD_PIN (-1)
#endif

#ifndef MYNEWT_VAL_BLE_LL_DBG_HCI_EV_PIN
#define MYNEWT_VAL_BLE_LL_DBG_HCI_EV_PIN (-1)
#endif

#ifndef MYNEWT_VAL_BLE_LL_DIRECT_TEST_MODE
#define MYNEWT_VAL_BLE_LL_DIRECT_TEST_MODE (0)
#endif

/* Value copied from BLE_LL_DIRECT_TEST_MODE */
#ifndef MYNEWT_VAL_BLE_LL_DTM
#define MYNEWT_VAL_BLE_LL_DTM (0)
#endif

#ifndef MYNEWT_VAL_BLE_LL_DTM_EXTENSIONS
#define MYNEWT_VAL_BLE_LL_DTM_EXTENSIONS (0)
#endif

#ifndef MYNEWT_VAL_BLE_LL_EXT_ADV_AUX_PTR_CNT
#define MYNEWT_VAL_BLE_LL_EXT_ADV_AUX_PTR_CNT (0)
#endif

#ifndef MYNEWT_VAL_BLE_LL_MASTER_SCA
#define MYNEWT_VAL_BLE_LL_MASTER_SCA (4)
#endif

#ifndef MYNEWT_VAL_BLE_LL_MAX_PKT_SIZE
#define MYNEWT_VAL_BLE_LL_MAX_PKT_SIZE (251)
#endif

#ifndef MYNEWT_VAL_BLE_LL_MFRG_ID
#define MYNEWT_VAL_BLE_LL_MFRG_ID (0xFFFF)
#endif

#ifndef MYNEWT_VAL_BLE_LL_NUM_COMP_PKT_ITVL_MS
#define MYNEWT_VAL_BLE_LL_NUM_COMP_PKT_ITVL_MS (2000)
#endif

#ifndef MYNEWT_VAL_BLE_LL_NUM_SCAN_DUP_ADVS
#define MYNEWT_VAL_BLE_LL_NUM_SCAN_DUP_ADVS (8)
#endif

#ifndef MYNEWT_VAL_BLE_LL_NUM_SCAN_RSP_ADVS
#define MYNEWT_VAL_BLE_LL_NUM_SCAN_RSP_ADVS (8)
#endif

#ifndef MYNEWT_VAL_BLE_LL_OUR_SCA
#define MYNEWT_VAL_BLE_LL_OUR_SCA (60)
#endif

#ifndef MYNEWT_VAL_BLE_LL_PRIO
#define MYNEWT_VAL_BLE_LL_PRIO (0)
#endif

#ifndef MYNEWT_VAL_BLE_LL_RESOLV_LIST_SIZE
#define MYNEWT_VAL_BLE_LL_RESOLV_LIST_SIZE (4)
#endif

#ifndef MYNEWT_VAL_BLE_LL_RNG_BUFSIZE
#define MYNEWT_VAL_BLE_LL_RNG_BUFSIZE (32)
#endif

#ifndef MYNEWT_VAL_BLE_LL_SCHED_AUX_CHAIN_MAFS_DELAY
#define MYNEWT_VAL_BLE_LL_SCHED_AUX_CHAIN_MAFS_DELAY (0)
#endif

#ifndef MYNEWT_VAL_BLE_LL_SCHED_AUX_MAFS_DELAY
#define MYNEWT_VAL_BLE_LL_SCHED_AUX_MAFS_DELAY (0)
#endif

#ifndef MYNEWT_VAL_BLE_LL_STRICT_CONN_SCHEDULING
#define MYNEWT_VAL_BLE_LL_STRICT_CONN_SCHEDULING (0)
#endif

#ifndef MYNEWT_VAL_BLE_LL_SUPP_MAX_RX_BYTES
#define MYNEWT_VAL_BLE_LL_SUPP_MAX_RX_BYTES (MYNEWT_VAL_BLE_LL_MAX_PKT_SIZE)
#endif

#ifndef MYNEWT_VAL_BLE_LL_SUPP_MAX_TX_BYTES
#define MYNEWT_VAL_BLE_LL_SUPP_MAX_TX_BYTES (MYNEWT_VAL_BLE_LL_MAX_PKT_SIZE)
#endif

#ifndef MYNEWT_VAL_BLE_LL_SYSINIT_STAGE
#define MYNEWT_VAL_BLE_LL_SYSINIT_STAGE (250)
#endif

#ifndef MYNEWT_VAL_BLE_LL_SYSVIEW
#define MYNEWT_VAL_BLE_LL_SYSVIEW (0)
#endif

#ifndef MYNEWT_VAL_BLE_LL_TX_PWR_DBM
#define MYNEWT_VAL_BLE_LL_TX_PWR_DBM (0)
#endif

#ifndef MYNEWT_VAL_BLE_LL_USECS_PER_PERIOD
#define MYNEWT_VAL_BLE_LL_USECS_PER_PERIOD (3250)
#endif

#ifndef MYNEWT_VAL_BLE_LL_VND_EVENT_ON_ASSERT
#define MYNEWT_VAL_BLE_LL_VND_EVENT_ON_ASSERT (0)
#endif

#ifndef MYNEWT_VAL_BLE_LL_WHITELIST_SIZE
#define MYNEWT_VAL_BLE_LL_WHITELIST_SIZE (8)
#endif

#ifndef MYNEWT_VAL_BLE_LP_CLOCK
#define MYNEWT_VAL_BLE_LP_CLOCK (1)
#endif

#ifndef MYNEWT_VAL_BLE_NUM_COMP_PKT_RATE
#define MYNEWT_VAL_BLE_NUM_COMP_PKT_RATE ((2 * OS_TICKS_PER_SEC))
#endif

#ifndef MYNEWT_VAL_BLE_PUBLIC_DEV_ADDR
#define MYNEWT_VAL_BLE_PUBLIC_DEV_ADDR ((uint8_t[6]){0x00, 0x00, 0x00, 0x00, 0x00, 0x00})
#endif

/* Overridden by @apache-mynewt-core/hw/bsp/nordic_pca10056 (defined by @apache-mynewt-nimble/nimble/controller) */
#ifndef MYNEWT_VAL_BLE_XTAL_SETTLE_TIME
#define MYNEWT_VAL_BLE_XTAL_SETTLE_TIME (1500)
#endif

/*** @apache-mynewt-nimble/nimble/drivers/nrf52 */
#ifndef MYNEWT_VAL_BLE_PHY_CODED_RX_IFS_EXTRA_MARGIN
#define MYNEWT_VAL_BLE_PHY_CODED_RX_IFS_EXTRA_MARGIN (0)
#endif

#ifndef MYNEWT_VAL_BLE_PHY_DBG_TIME_ADDRESS_END_PIN
#define MYNEWT_VAL_BLE_PHY_DBG_TIME_ADDRESS_END_PIN (-1)
#endif

#ifndef MYNEWT_VAL_BLE_PHY_DBG_TIME_TXRXEN_READY_PIN
#define MYNEWT_VAL_BLE_PHY_DBG_TIME_TXRXEN_READY_PIN (-1)
#endif

#ifndef MYNEWT_VAL_BLE_PHY_DBG_TIME_WFR_PIN
#define MYNEWT_VAL_BLE_PHY_DBG_TIME_WFR_PIN (-1)
#endif

#ifndef MYNEWT_VAL_BLE_PHY_NRF52840_ERRATA_164
#define MYNEWT_VAL_BLE_PHY_NRF52840_ERRATA_164 (0)
#endif

#ifndef MYNEWT_VAL_BLE_PHY_NRF52840_ERRATA_191
#define MYNEWT_VAL_BLE_PHY_NRF52840_ERRATA_191 (1)
#endif

#ifndef MYNEWT_VAL_BLE_PHY_SYSVIEW
#define MYNEWT_VAL_BLE_PHY_SYSVIEW (0)
#endif

#ifndef MYNEWT_VAL_TIMER_5
#define MYNEWT_VAL_TIMER_5 (1)
#endif

/* Value copied from BLE_LL_OUR_SCA */
#ifndef MYNEWT_VAL_BLE_LL_SCA
#define MYNEWT_VAL_BLE_LL_SCA (60)
#endif


#endif

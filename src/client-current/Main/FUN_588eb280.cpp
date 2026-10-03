// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588EB280 .. +0x48 bytes.
extern "C" __declspec(naked) void FUN_588eb280() {
    __asm {
        // 0x588EB280: movsx eax, word ptr [esp + 0x10]
        __asm _emit 0x0F
        __asm _emit 0xBF
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588EB285: mov edx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x588EB289: push esi
        __asm _emit 0x56
        // 0x588EB28A: push edi
        __asm _emit 0x57
        // 0x588EB28B: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x588EB28D: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x588EB28F: push edi
        __asm _emit 0x57
        // 0x588EB290: push eax
        __asm _emit 0x50
        // 0x588EB291: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588EB295: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588EB297: mov ecx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588EB29B: push ecx
        __asm _emit 0x51
        // 0x588EB29C: push edx
        __asm _emit 0x52
        // 0x588EB29D: push eax
        __asm _emit 0x50
        // 0x588EB29E: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588EB2A0: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0xFB
        __asm _emit 0x7E
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588EB2A5: mov dword ptr [esi + 0x5c], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x5C
        // 0x588EB2A8: mov dword ptr [esi + 0x58], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x58
        // 0x588EB2AB: mov dword ptr [esi + 0x54], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x54
        // 0x588EB2AE: mov dword ptr [esi + 0x50], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x50
        // 0x588EB2B1: mov dword ptr [esi + 0x60], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x60
        // 0x588EB2B4: pop edi
        __asm _emit 0x5F
        // 0x588EB2B5: mov dword ptr [esi], 0x589a14d0
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0xD0
        __asm _emit 0x14
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588EB2BB: mov dword ptr [esi + 0x64], 2
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x64
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EB2C2: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x588EB2C4: pop esi
        __asm _emit 0x5E
        // 0x588EB2C5: ret 0x10
        __asm _emit 0xC2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}

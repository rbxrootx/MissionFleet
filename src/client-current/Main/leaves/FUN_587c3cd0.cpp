// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C3CD0 .. +0x78 bytes.
extern "C" __declspec(naked) void FUN_587c3cd0() {
    __asm {
        push -1
        push 58981228h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push ecx
        push esi
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        xor eax, esp
        push eax
        lea eax, [esp + 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, ecx
        mov dword ptr [esp + 8], esi
        mov dword ptr [esi], 5899ad48h
        mov eax, dword ptr [esi + 1db4h]
        mov dword ptr [esp + 14h], 0
        test eax, eax
        ; Exact mapped bytes 74 13: je 0x587c3d23
        __asm _emit 0x74
        __asm _emit 0x13
        push eax
        ; Exact mapped bytes E8 2C 8F 1B 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x8f
        __asm _emit 0x1b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esi + 1db4h], 0
        mov ecx, dword ptr [esi + 1db8h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x587c3d35
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov ecx, esi
        mov dword ptr [esp + 14h], 0ffffffffh
        ; Exact mapped bytes E8 CC 84 14 00: call 0x5890c210
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x84
        __asm _emit 0x14
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 0ch]
    }
}

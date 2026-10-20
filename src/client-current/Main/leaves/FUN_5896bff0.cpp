// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5896BFF0 .. +0x1F bytes.
extern "C" __declspec(naked) void FUN_5896bff0() {
    __asm {
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B F1: mov esi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf1
        ; Exact mapped bytes 8B 46 18: mov eax, dword ptr [esi + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x18
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 0F: je 0x5896c009
        __asm _emit 0x74
        __asm _emit 0x0f
        ; Exact mapped bytes 8B 08: mov ecx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x08
        ; Exact mapped bytes 8B 51 08: mov edx, dword ptr [ecx + 8]
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x08
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes C7 46 18 00 00 00 00: mov dword ptr [esi + 0x18], 0
        __asm _emit 0xc7
        __asm _emit 0x46
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

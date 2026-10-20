// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004378BD .. +0x13 bytes.
extern "C" __declspec(naked) void FUN_004378bd_004378BD() {
    __asm {
        ; Exact mapped bytes 8B 41 08: mov eax, dword ptr [ecx + 8]
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x08
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 07: je 0x4378cb
        __asm _emit 0x74
        __asm _emit 0x07
        ; Exact mapped bytes 8B 08: mov ecx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x08
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
        ; Exact mapped bytes E9 C3 FF FF FF: jmp 0x437893
        __asm _emit 0xe9
        __asm _emit 0xc3
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
    }
}

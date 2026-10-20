// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584FB0B0 .. +0x67 bytes.
extern "C" __declspec(naked) void FUN_584fb0b0_584FB0B0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 264h]
        ; Exact mapped bytes E8 D9 1A 00 00: call 0x584fcba0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x1a
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 39: je 0x584fb104
        __asm _emit 0x74
        __asm _emit 0x39
        mov ecx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx + 264h]
        ; Exact mapped bytes E8 77 14 00 00: call 0x584fc550
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 1E: je 0x584fb102
        __asm _emit 0x74
        __asm _emit 0x1e
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [ebp - 0ch], eax
        push 88h
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        ; Exact mapped bytes E8 3C 5F 33 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x33
        __asm _emit 0x00
        add esp, 8
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB B5: jmp 0x584fb0b9
        __asm _emit 0xeb
        __asm _emit 0xb5
        mov edx, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + 264h]
        ; Exact mapped bytes E8 6E FF FF FF: call 0x584fb080
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}

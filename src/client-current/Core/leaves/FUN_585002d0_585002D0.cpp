// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585002D0 .. +0x3F bytes.
extern "C" __declspec(naked) void FUN_585002d0_585002D0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C1 00 00 00: call 0x585003a0
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 4]
        movzx ecx, byte ptr [eax + 2ch]
        test ecx, ecx
        ; Exact mapped bytes 74 15: je 0x58500300
        __asm _emit 0x74
        __asm _emit 0x15
        mov ecx, dword ptr [ebp - 4]
        add ecx, 14h
        ; Exact mapped bytes E8 4A 5A FC FF: call 0x584c5d40
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x5a
        __asm _emit 0xfc
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C1 09 00 00: call 0x58500cc0
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 76 08 00 00: call 0x58500b80
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}

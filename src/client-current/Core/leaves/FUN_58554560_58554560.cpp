// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58554560 .. +0x6B bytes.
extern "C" __declspec(naked) void FUN_58554560_58554560() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x5855457b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 20h
        ; Exact mapped bytes 73 1F: jae 0x585545a0
        __asm _emit 0x73
        __asm _emit 0x1f
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + ecx*4 + 8], 0
        ; Exact mapped bytes 74 10: je 0x5855459e
        __asm _emit 0x74
        __asm _emit 0x10
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx + eax*4 + 8]
        ; Exact mapped bytes E8 F3 DB FF FF: call 0x58552190
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xdb
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB D2: jmp 0x58554572
        __asm _emit 0xeb
        __asm _emit 0xd2
        push 588a935ch
        ; Exact mapped bytes E8 46 DA FC FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xda
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 0ch], eax
        mov edx, dword ptr [ebp - 0ch]
        push edx
        push 0
        push 800h
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 5A F6 08 00: call 0x585e3c20
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xf6
        __asm _emit 0x08
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}

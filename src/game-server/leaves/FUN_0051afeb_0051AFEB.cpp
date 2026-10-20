// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0051AFEB .. +0x3C bytes.
extern "C" __declspec(naked) void FUN_0051afeb_0051AFEB() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 11: jne 0x51b00c
        __asm _emit 0x75
        __asm _emit 0x11
        push 71h
        push 5cb0ach
        ; Exact mapped bytes E8 F9 99 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x99
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51b00c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E3: jne 0x51aff5
        __asm _emit 0x75
        __asm _emit 0xe3
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 65 FC F8 FF: call 0x4aac80
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xfc
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 4
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

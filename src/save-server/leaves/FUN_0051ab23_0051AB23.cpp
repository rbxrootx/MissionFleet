// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0051AB23 .. +0x4C bytes.
extern "C" __declspec(naked) void FUN_0051ab23_0051AB23() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        ; Exact mapped bytes E8 34 5B 02 00: call 0x540663
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x5b
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 2ch], 0
        ; Exact mapped bytes 75 11: jne 0x51ab4c
        __asm _emit 0x75
        __asm _emit 0x11
        push 45h
        push 6768d4h
        ; Exact mapped bytes E8 F9 E1 00 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xe1
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51ab4c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x51ab32
        __asm _emit 0x75
        __asm _emit 0xe0
        mov edx, dword ptr [ebp - 4]
        add edx, 2ch
        push edx
        ; Exact mapped bytes FF 15 20 BA 68 00: call dword ptr [0x68ba20]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0xba
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 05: jne 0x51ab68
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E8 18 FF FF FF: call 0x51aa80
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}

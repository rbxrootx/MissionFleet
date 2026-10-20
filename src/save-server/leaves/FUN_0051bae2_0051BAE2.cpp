// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0051BAE2 .. +0x42 bytes.
extern "C" __declspec(naked) void FUN_0051bae2_0051BAE2() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B5 3F FB FF: call 0x4cfaa9
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x3f
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 92 A7 FB FF: call 0x4d628e
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xa7
        __asm _emit 0xfb
        __asm _emit 0xff
        and eax, 30h
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x51bb17
        __asm _emit 0x75
        __asm _emit 0x14
        push 1ach
        push 6769f8h
        ; Exact mapped bytes E8 2E D2 00 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xd2
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51bb17
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D7: jne 0x51baf4
        __asm _emit 0x75
        __asm _emit 0xd7
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00533233 .. +0x4F bytes.
extern "C" __declspec(naked) void FUN_00533233_00533233() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 4], eax
        push 1
        push 0ch
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 04 CC F9 FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xcc
        __asm _emit 0xf9
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x53326a
        __asm _emit 0x75
        __asm _emit 0x14
        push 16ch
        push 5820dch
        ; Exact mapped bytes E8 9B 17 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x53326a
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x533245
        __asm _emit 0x75
        __asm _emit 0xd5
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [eax + 8], ecx
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}

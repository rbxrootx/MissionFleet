// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0053825D .. +0x5C bytes.
extern "C" __declspec(naked) void FUN_0053825d_0053825D() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp - 0ch]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 75 14: jne 0x538286
        __asm _emit 0x75
        __asm _emit 0x14
        push 26ch
        push 581fc0h
        ; Exact mapped bytes E8 7F C7 FF FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xc7
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x538286
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x538269
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        lea ecx, [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 45 9A FC FF: call 0x501ce5
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x9a
        __asm _emit 0xfc
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov eax, dword ptr [eax + 4]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ecx], edx
        mov dword ptr [ecx + 4], eax
        mov eax, dword ptr [ebp + 8]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}

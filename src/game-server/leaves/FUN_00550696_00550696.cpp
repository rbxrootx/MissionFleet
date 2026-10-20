// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00550696 .. +0x9B bytes.
extern "C" __declspec(naked) void FUN_00550696_00550696() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 18h], ecx
        push 198h
        push 5cf710h
        mov eax, dword ptr [ebp - 18h]
        push eax
        ; Exact mapped bytes E8 AB AA FA FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xaa
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 18h]
        cmp dword ptr [ecx + 10h], 0
        ; Exact mapped bytes 75 14: jne 0x5506d2
        __asm _emit 0x75
        __asm _emit 0x14
        push 199h
        push 5cf710h
        ; Exact mapped bytes E8 33 43 FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x43
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5506d2
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x5506b5
        __asm _emit 0x75
        __asm _emit 0xdd
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 10h], 0
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 14h], ecx
        push 2
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 10h]
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 10h]
        mov edx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes FF 52 28: call dword ptr [edx + 0x28]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x28
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 09: je 0x550728
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 FB F2 FF FF: call 0x54fa23
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
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

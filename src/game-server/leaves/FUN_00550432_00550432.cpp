// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00550432 .. +0x84 bytes.
extern "C" __declspec(naked) void FUN_00550432_00550432() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 10h], ecx
        push 159h
        push 5cf710h
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 0F AD FA FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xad
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 10h], 0
        ; Exact mapped bytes 75 14: jne 0x55046e
        __asm _emit 0x75
        __asm _emit 0x14
        push 15ah
        push 5cf710h
        ; Exact mapped bytes E8 97 45 FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x45
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x55046e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x550451
        __asm _emit 0x75
        __asm _emit 0xdd
        mov dword ptr [ebp - 8], 0
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 10h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 10h]
        mov edx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes FF 52 18: call dword ptr [edx + 0x18]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x18
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 09: je 0x5504ad
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 76 F5 FF FF: call 0x54fa23
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
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

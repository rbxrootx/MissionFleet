// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00559116 .. +0xAC bytes.
extern "C" __declspec(naked) void FUN_00559116_00559116() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        push 209h
        push 5cfe58h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 2D 20 FA FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x20
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 20h], 0
        ; Exact mapped bytes 75 14: jne 0x559150
        __asm _emit 0x75
        __asm _emit 0x14
        push 20ah
        push 5cfe58h
        ; Exact mapped bytes E8 B5 B8 FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xb8
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x559150
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x559133
        __asm _emit 0x75
        __asm _emit 0xdd
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 30h], 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 AB ED FF FF: call 0x557f13
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xed
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 41: jne 0x5591ad
        __asm _emit 0x75
        __asm _emit 0x41
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 20h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 20h]
        mov eax, dword ptr [ecx]
        push edx
        ; Exact mapped bytes FF 50 34: call dword ptr [eax + 0x34]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x34
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 30h], eax
        push 210h
        push 5cfe58h
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 1ch]
        push eax
        ; Exact mapped bytes E8 C6 1F FA FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x1f
        __asm _emit 0xfa
        __asm _emit 0xff
        push 1
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 1ch]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 1ch]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 52 64: call dword ptr [edx + 0x64]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x64
        mov eax, dword ptr [ebp - 4]
        xor ecx, ecx
        cmp dword ptr [eax + 30h], 0
        sete cl
        mov eax, ecx
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}

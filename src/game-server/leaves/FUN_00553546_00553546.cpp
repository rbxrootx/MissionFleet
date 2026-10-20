// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00553546 .. +0xB7 bytes.
extern "C" __declspec(naked) void FUN_00553546_00553546() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0ch], ecx
        push 181h
        push 5cfa08h
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 FB 7B FA FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x7b
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        cmp dword ptr [ecx + 20h], 0
        ; Exact mapped bytes 75 14: jne 0x553582
        __asm _emit 0x75
        __asm _emit 0x14
        push 182h
        push 5cfa08h
        ; Exact mapped bytes E8 83 14 FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x14
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x553582
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x553565
        __asm _emit 0x75
        __asm _emit 0xdd
        push 58ea88h
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 20h]
        push ecx
        ; Exact mapped bytes E8 ED 88 FF FF: call 0x54be86
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x88
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 18: je 0x5535ba
        __asm _emit 0x74
        __asm _emit 0x18
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [edx + 50h], 1
        ; Exact mapped bytes EB 3C: jmp 0x5535f6
        __asm _emit 0xeb
        __asm _emit 0x3c
        lea eax, [ebp - 8]
        push eax
        push 1
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 20h]
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 20h]
        mov eax, dword ptr [ecx]
        push edx
        ; Exact mapped bytes FF 50 58: call dword ptr [eax + 0x58]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 16: jne 0x5535ec
        __asm _emit 0x75
        __asm _emit 0x16
        mov ecx, dword ptr [ebp - 8]
        and ecx, 8
        test ecx, ecx
        ; Exact mapped bytes 75 0C: jne 0x5535ec
        __asm _emit 0x75
        __asm _emit 0x0c
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [edx + 50h], 2
        ; Exact mapped bytes EB 0A: jmp 0x5535f6
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [eax + 50h], 3
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}

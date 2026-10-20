// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00432238 .. +0x7B bytes.
extern "C" __declspec(naked) void FUN_00432238_00432238() {
    __asm {
        push ecx
        mov eax, dword ptr [ecx]
        push ebx
        push ebp
        push esi
        push edi
        mov dword ptr [esp + 10h], ecx
        ; Exact mapped bytes FF 50 28: call dword ptr [eax + 0x28]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x28
        mov esi, eax
        xor ebp, ebp
        cmp esi, ebp
        ; Exact mapped bytes 74 5B: je 0x4322a9
        __asm _emit 0x74
        __asm _emit 0x5b
        mov ebx, dword ptr [esp + 18h]
        mov edi, 0c000h
        mov eax, dword ptr [ebx + 4]
        cmp eax, edi
        ; Exact mapped bytes 73 17: jae 0x432275
        __asm _emit 0x73
        __asm _emit 0x17
        push ebp
        push ebp
        push eax
        push dword ptr [esi + 4]
        ; Exact mapped bytes E8 2E DE FF FF: call 0x430097
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xde
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, ebp
        ; Exact mapped bytes 75 2A: jne 0x432297
        __asm _emit 0x75
        __asm _emit 0x2a
        mov esi, dword ptr [esi]
        cmp esi, ebp
        ; Exact mapped bytes 75 E4: jne 0x432257
        __asm _emit 0x75
        __asm _emit 0xe4
        ; Exact mapped bytes EB 34: jmp 0x4322a9
        __asm _emit 0xeb
        __asm _emit 0x34
        mov eax, dword ptr [esi + 4]
        push ebp
        push ebp
        push edi
        push eax
        ; Exact mapped bytes E8 16 DE FF FF: call 0x430097
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xde
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, ebp
        ; Exact mapped bytes 74 E8: je 0x43226d
        __asm _emit 0x74
        __asm _emit 0xe8
        mov ecx, dword ptr [eax + 10h]
        mov ecx, dword ptr [ecx]
        cmp ecx, dword ptr [ebx + 4]
        ; Exact mapped bytes 74 08: je 0x432297
        __asm _emit 0x74
        __asm _emit 0x08
        push ebp
        push ebp
        push edi
        add eax, 18h
        ; Exact mapped bytes EB E4: jmp 0x43227b
        __asm _emit 0xeb
        __asm _emit 0xe4
        push dword ptr [ebx + 0ch]
        mov ecx, dword ptr [esp + 14h]
        push dword ptr [ebx + 8]
        ; Exact mapped bytes FF 50 14: call dword ptr [eax + 0x14]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x14
        push 1
        pop eax
        ; Exact mapped bytes EB 02: jmp 0x4322ab
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

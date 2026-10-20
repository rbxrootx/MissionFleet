// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00416E8B .. +0x5B bytes.
extern "C" __declspec(naked) void FUN_00416e8b_00416E8B() {
    __asm {
        push ebx
        push esi
        push edi
        xor edi, edi
        cmp dword ptr [esp + 14h], edi
        mov ebx, ecx
        ; Exact mapped bytes 74 31: je 0x416ec9
        __asm _emit 0x74
        __asm _emit 0x31
        ; Exact mapped bytes E8 16 EE 01 00: call 0x435cb3
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xee
        __asm _emit 0x01
        __asm _emit 0x00
        mov esi, dword ptr [eax + 0ch]
        push 0f0h
        push dword ptr [esp + 18h]
        push esi
        ; Exact mapped bytes FF 15 70 C2 43 00: call dword ptr [0x43c270]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x70
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 15: je 0x416ec9
        __asm _emit 0x74
        __asm _emit 0x15
        push eax
        push esi
        ; Exact mapped bytes FF 15 58 C1 43 00: call dword ptr [0x43c158]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x58
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 20: je 0x416ee0
        __asm _emit 0x74
        __asm _emit 0x20
        push eax
        ; Exact mapped bytes FF 15 10 C2 43 00: call dword ptr [0x43c210]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        mov edi, eax
        push 1
        test edi, edi
        pop eax
        ; Exact mapped bytes 74 10: je 0x416ee0
        __asm _emit 0x74
        __asm _emit 0x10
        push dword ptr [esp + 18h]
        mov eax, dword ptr [ebx]
        mov ecx, ebx
        push edi
        push dword ptr [esp + 18h]
        ; Exact mapped bytes FF 50 1C: call dword ptr [eax + 0x1c]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x1c
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}

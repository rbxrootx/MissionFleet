// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5882C440 .. +0x7B bytes.
extern "C" __declspec(naked) void FUN_5882c440() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 4], 0ddddddddh
        ; Exact mapped bytes 75 02: jne 0x5882c455
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 62: jmp 0x5882c4b7
        __asm _emit 0xeb
        __asm _emit 0x62
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 30h], 0
        ; Exact mapped bytes 74 59: je 0x5882c4b7
        __asm _emit 0x74
        __asm _emit 0x59
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 4], -1
        ; Exact mapped bytes 74 50: je 0x5882c4b7
        __asm _emit 0x74
        __asm _emit 0x50
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 10h]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        push 1
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        push edx
        ; Exact mapped bytes FF 15 44 45 89 58: call dword ptr [0x58894544]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x44
        __asm _emit 0x45
        __asm _emit 0x89
        __asm _emit 0x58
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        push ecx
        ; Exact mapped bytes FF 15 58 45 89 58: call dword ptr [0x58894558]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x58
        __asm _emit 0x45
        __asm _emit 0x89
        __asm _emit 0x58
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 2ch]
        ; Exact mapped bytes E8 CE 11 00 00: call 0x5882d670
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 4], 0ffffffffh
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 CA 07 00 00: call 0x5882cc80
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58500310 .. +0x7A bytes.
extern "C" __declspec(naked) void FUN_58500310_58500310() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        movzx ecx, byte ptr [eax + 10h]
        test ecx, ecx
        ; Exact mapped bytes 74 62: je 0x58500386
        __asm _emit 0x74
        __asm _emit 0x62
        push 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0ch]
        push eax
        ; Exact mapped bytes FF 15 D8 44 89 58: call dword ptr [0x588944d8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd8
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        push 588a3788h
        ; Exact mapped bytes E8 B3 1C 02 00: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0ch]
        mov dword ptr [ebp - 0ch], edx
        push 0
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 54h
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        ; Exact mapped bytes FF 15 6C 44 89 58: call dword ptr [0x5889446c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x6c
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        push 5
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ch]
        push ecx
        ; Exact mapped bytes FF 15 D8 44 89 58: call dword ptr [0x588944d8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd8
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        push 0
        push 0
        push 2
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0ch]
        push eax
        ; Exact mapped bytes FF 15 E0 44 89 58: call dword ptr [0x588944e0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe0
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}

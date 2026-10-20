// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5855C010 .. +0x7B bytes.
extern "C" __declspec(naked) void FUN_5855c010_5855C010() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 254h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 258h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 14h]
        mov dword ptr [ecx + 29ch], edx
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 74 37: je 0x5855c078
        __asm _emit 0x74
        __asm _emit 0x37
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 31: je 0x5855c078
        __asm _emit 0x74
        __asm _emit 0x31
        push 40h
        push 0
        mov eax, dword ptr [ebp - 4]
        add eax, 25ch
        push eax
        ; Exact mapped bytes E8 B7 0D 2F 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x0d
        __asm _emit 0x2f
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp + 14h]
        shl ecx, 3
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp - 4]
        add eax, 25ch
        push eax
        ; Exact mapped bytes E8 1B 08 2F 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x08
        __asm _emit 0x2f
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 2a0h], 0
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0048AA9E .. +0x9A bytes.
extern "C" __declspec(naked) void FUN_0048aa9e_0048AA9E() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 71: je 0x48ab23
        __asm _emit 0x74
        __asm _emit 0x71
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 42 18 00 00: call 0x48c300
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0c2ch]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 F0 DB FA FF: call 0x4386c0
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xdb
        __asm _emit 0xfa
        __asm _emit 0xff
        push 0
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 06 DC FA FF: call 0x4386e0
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xdc
        __asm _emit 0xfa
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 0c2ch]
        ; Exact mapped bytes E8 F4 DB FA FF: call 0x4386e0
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xdb
        __asm _emit 0xfa
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edx + 0c2ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0bb0h]
        add edx, 1
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0bb0h], edx
        mov ecx, dword ptr [ebp + 8]
        push ecx
        push 0
        push 467h
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 40h]
        ; Exact mapped bytes E8 B6 10 0B 00: call 0x53bbd9
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x10
        __asm _emit 0x0b
        __asm _emit 0x00
        mov eax, 1
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 AE DC 01 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xdc
        __asm _emit 0x01
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

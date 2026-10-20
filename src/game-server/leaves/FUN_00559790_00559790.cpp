// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00559790 .. +0xB3 bytes.
extern "C" __declspec(naked) void FUN_00559790_00559790() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57f579h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 35 FF FF FF: call 0x5596ed
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx], 5895a8h
        push 2ch
        push 0
        mov edx, dword ptr [ebp - 10h]
        add edx, 60h
        push edx
        ; Exact mapped bytes E8 98 FB F4 FF: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xfb
        __asm _emit 0xf4
        __asm _emit 0xff
        add esp, 0ch
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 60h], 2ch
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [ecx + 64h], edx
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 0F: je 0x559803
        __asm _emit 0x74
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 64h]
        or ecx, 8
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 64h], ecx
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 70h], 559690h
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 84h], edx
        push 5fh
        push 5cea38h
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 37 19 FA FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x19
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}

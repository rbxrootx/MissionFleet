// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0051C45E .. +0x81 bytes.
extern "C" __declspec(naked) void FUN_0051c45e_0051C45E() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 1F 9E FB FF: call 0x4d628e
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x9e
        __asm _emit 0xfb
        __asm _emit 0xff
        and eax, 42h
        test eax, eax
        ; Exact mapped bytes 74 1D: je 0x51c493
        __asm _emit 0x74
        __asm _emit 0x1d
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        push 1a2h
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 90 A8 00 00 00: call dword ptr [eax + 0xa8]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 46: jmp 0x51c4d9
        __asm _emit 0xeb
        __asm _emit 0x46
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], -1
        ; Exact mapped bytes 75 07: jne 0x51c4a6
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x51c4b1
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 47 1E 01 00: call 0x52e300
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x1e
        __asm _emit 0x01
        __asm _emit 0x00
        cmp dword ptr [ebp - 4], eax
        ; Exact mapped bytes 7D 18: jge 0x51c4d6
        __asm _emit 0x7d
        __asm _emit 0x18
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 2A 21 01 00: call 0x52e5f4
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x21
        __asm _emit 0x01
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], eax
        ; Exact mapped bytes 75 05: jne 0x51c4d4
        __asm _emit 0x75
        __asm _emit 0x05
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes EB 05: jmp 0x51c4d9
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes EB D2: jmp 0x51c4a8
        __asm _emit 0xeb
        __asm _emit 0xd2
        or eax, 0ffffffffh
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}

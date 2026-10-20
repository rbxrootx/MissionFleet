// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0051C66A .. +0x8D bytes.
extern "C" __declspec(naked) void FUN_0051c66a_0051C66A() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 13 9C FB FF: call 0x4d628e
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x9c
        __asm _emit 0xfb
        __asm _emit 0xff
        and eax, 40h
        test eax, eax
        ; Exact mapped bytes 74 1D: je 0x51c69f
        __asm _emit 0x74
        __asm _emit 0x1d
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        push 18ch
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
        ; Exact mapped bytes EB 52: jmp 0x51c6f1
        __asm _emit 0xeb
        __asm _emit 0x52
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], -1
        ; Exact mapped bytes 75 07: jne 0x51c6b2
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x51c6bd
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 3B 1C 01 00: call 0x52e300
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x1c
        __asm _emit 0x01
        __asm _emit 0x00
        cmp dword ptr [ebp - 4], eax
        ; Exact mapped bytes 7D 24: jge 0x51c6ee
        __asm _emit 0x7d
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 1E 1F 01 00: call 0x52e5f4
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x1f
        __asm _emit 0x01
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], eax
        ; Exact mapped bytes 75 11: jne 0x51c6ec
        __asm _emit 0x75
        __asm _emit 0x11
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 BD 1C 01 00: call 0x52e3a4
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x1c
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes EB 05: jmp 0x51c6f1
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes EB C6: jmp 0x51c6b4
        __asm _emit 0xeb
        __asm _emit 0xc6
        or eax, 0ffffffffh
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0045DCF0 .. +0x92 bytes.
extern "C" __declspec(naked) void FUN_0045dcf0_0045DCF0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 8B 0D 98 1A 58 00: mov ecx, dword ptr [0x581a98]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x1a
        __asm _emit 0x58
        __asm _emit 0x00
        sub ecx, dword ptr [eax + 8]
        cmp ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 77 05: ja 0x45dd1d
        __asm _emit 0x77
        __asm _emit 0x05
        ; Exact mapped bytes E8 23 B4 06 00: call 0x4c9140
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xb4
        __asm _emit 0x06
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 76 4C: jbe 0x45dd6f
        __asm _emit 0x76
        __asm _emit 0x4c
        push 0
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 8]
        add eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 33 01 00 00: call 0x45de70
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 74 29: je 0x45dd6f
        __asm _emit 0x74
        __asm _emit 0x29
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 4]
        mov eax, dword ptr [ebp - 8]
        add edx, dword ptr [eax + 8]
        push edx
        ; Exact mapped bytes E8 30 00 00 00: call 0x45dd90
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 A1 00 00 00: call 0x45de10
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        add esp, 8
        cmp ebp, esp
        ; Exact mapped bytes E8 64 AA 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xaa
        __asm _emit 0x04
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}

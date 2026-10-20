// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0058731D .. +0x6A bytes.
extern "C" __declspec(naked) void _AdjustCP_CMetaFileDC__IAEXH_Z_0058731D() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 8], 0
        ; Exact mapped bytes 75 02: jne 0x587331
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 50: jmp 0x587381
        __asm _emit 0xeb
        __asm _emit 0x50
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 7A EE FA FF: call 0x5361b3
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xee
        __asm _emit 0xfa
        __asm _emit 0xff
        and eax, 6
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 6
        ; Exact mapped bytes 75 02: jne 0x587347
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 3A: jmp 0x587381
        __asm _emit 0xeb
        __asm _emit 0x3a
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 75 08: jne 0x587355
        __asm _emit 0x75
        __asm _emit 0x08
        mov ecx, dword ptr [ebp + 8]
        neg ecx
        mov dword ptr [ebp + 8], ecx
        lea edx, [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 98 D7 FA FF: call 0x534af9
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xd7
        __asm _emit 0xfa
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 0ch]
        add eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 0ch], eax
        push 0
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 8]
        push ecx
        ; Exact mapped bytes FF 15 00 B6 68 00: call dword ptr [0x68b600]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0xb6
        __asm _emit 0x68
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

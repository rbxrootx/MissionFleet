// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00493DA4 .. +0x66 bytes.
extern "C" __declspec(naked) void _ShowWindow_COleControlSite__UAEHH_Z_00493DA4() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 20h]
        push ecx
        ; Exact mapped bytes FF 15 44 27 5E 00: call dword ptr [0x5e2744]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x44
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], 0
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 10h], edx
        cmp dword ptr [ebp - 10h], 5
        ; Exact mapped bytes 77 1A: ja 0x493dea
        __asm _emit 0x77
        __asm _emit 0x1a
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 24 85 0A 3E 49 00: jmp dword ptr [eax*4 + 0x493e0a]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x0a
        __asm _emit 0x3e
        __asm _emit 0x49
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        ; Exact mapped bytes EB 07: jmp 0x493dea
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 0fffffffdh
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 11: je 0x493e01
        __asm _emit 0x74
        __asm _emit 0x11
        push 0
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 50 5C: call dword ptr [eax + 0x5c]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x5c
        mov eax, dword ptr [ebp - 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

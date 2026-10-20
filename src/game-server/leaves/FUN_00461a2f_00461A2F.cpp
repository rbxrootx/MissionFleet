// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00461A2F .. +0x73 bytes.
extern "C" __declspec(naked) void FUN_00461a2f_00461A2F() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov eax, 0cccccccch
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 10h], ecx
        ; Exact mapped bytes A1 7C CB 5D 00: mov eax, dword ptr [0x5dcb7c]
        __asm _emit 0xa1
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 40cd8h]
        ; Exact mapped bytes E8 27 50 FC FF: call 0x426a80
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x50
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 2D: je 0x461a8f
        __asm _emit 0x74
        __asm _emit 0x2d
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 10h]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ecx + 14h]
        mov dword ptr [ebp - 8], eax
        push 0
        push 8
        lea ecx, [ebp - 0ch]
        push ecx
        push 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 8]
        push eax
        push 80017000h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 A3 57 02 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x57
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, 1
        add esp, 10h
        cmp ebp, esp
        ; Exact mapped bytes E8 42 6D 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x6d
        __asm _emit 0x04
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}

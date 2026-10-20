// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A2087 .. +0x8A bytes.
extern "C" __declspec(naked) void FUN_004a2087_004A2087() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 5F A7 02 00: call 0x4cc7f7
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xa7
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        push eax
        ; Exact mapped bytes E8 44 7D FC FF: call 0x469df0
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x7d
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x4a20c4
        __asm _emit 0x74
        __asm _emit 0x11
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 54 76 FA FF: call 0x449710
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x76
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB DC: jmp 0x4a20a0
        __asm _emit 0xeb
        __asm _emit 0xdc
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 4]
        cmp eax, dword ptr [edx]
        ; Exact mapped bytes 74 3F: je 0x4a210d
        __asm _emit 0x74
        __asm _emit 0x3f
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 E3 2B 08 00: call 0x524cb9
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x2b
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 4]
        sub edx, dword ptr [ecx]
        mov eax, dword ptr [eax + 4]
        sub eax, edx
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        push ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes E8 64 3B FC FF: call 0x465c60
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x3b
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 0ch
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 B2 2B 08 00: call 0x524cb9
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x2b
        __asm _emit 0x08
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [eax + 4], edx
        mov esp, ebp
        pop ebp
        ret
    }
}

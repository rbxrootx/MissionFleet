// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A0B9F .. +0x7E bytes.
extern "C" __declspec(naked) void FUN_004a0b9f_004A0B9F() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 10h], ecx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes 0F BE 45 08: movsx eax, byte ptr [ebp + 8]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes 0F BE 4D 0C: movsx ecx, byte ptr [ebp + 0xc]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x4d
        __asm _emit 0x0c
        cmp eax, ecx
        ; Exact mapped bytes 74 59: je 0x4a0c14
        __asm _emit 0x74
        __asm _emit 0x59
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 34 BC 02 00: call 0x4cc7f7
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xbc
        __asm _emit 0x02
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 E6 40 08 00: call 0x524cb9
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x40
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 0ch]
        cmp edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 73 30: jae 0x4a0c14
        __asm _emit 0x73
        __asm _emit 0x30
        mov eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        ; Exact mapped bytes 0F BE 55 08: movsx edx, byte ptr [ebp + 8]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x55
        __asm _emit 0x08
        cmp ecx, edx
        ; Exact mapped bytes 75 11: jne 0x4a0c03
        __asm _emit 0x75
        __asm _emit 0x11
        mov eax, dword ptr [ebp - 0ch]
        mov cl, byte ptr [ebp + 0ch]
        mov byte ptr [eax], cl
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 04 8B FA FF: call 0x449710
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x8b
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes EB C8: jmp 0x4a0bdc
        __asm _emit 0xeb
        __asm _emit 0xc8
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}

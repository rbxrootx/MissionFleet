// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A0E4B .. +0xA7 bytes.
extern "C" __declspec(naked) void FUN_004a0e4b_004A0E4B() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov dword ptr [ebp - 14h], ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 9B B9 02 00: call 0x4cc7f7
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xb9
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 45 3E 08 00: call 0x524cb9
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x3e
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx]
        add edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 4]
        cmp eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 73 38: jae 0x4a0ebf
        __asm _emit 0x73
        __asm _emit 0x38
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        ; Exact mapped bytes 0F BE 45 08: movsx eax, byte ptr [ebp + 8]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x45
        __asm _emit 0x08
        cmp edx, eax
        ; Exact mapped bytes 74 19: je 0x4a0eae
        __asm _emit 0x74
        __asm _emit 0x19
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 4]
        mov al, byte ptr [edx]
        mov byte ptr [ecx], al
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes E8 68 88 FA FF: call 0x449710
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x88
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 10h], eax
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes E8 59 88 FA FF: call 0x449710
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x88
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB C0: jmp 0x4a0e7f
        __asm _emit 0xeb
        __asm _emit 0xc0
        mov eax, dword ptr [ebp - 10h]
        mov byte ptr [eax], 0
        mov ecx, dword ptr [ebp - 4]
        sub ecx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 0ch], ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 E3 3D 08 00: call 0x524cb9
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x3d
        __asm _emit 0x08
        __asm _emit 0x00
        add eax, 4
        mov dword ptr [ebp - 18h], eax
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx]
        sub eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ecx], eax
        mov eax, dword ptr [ebp - 0ch]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

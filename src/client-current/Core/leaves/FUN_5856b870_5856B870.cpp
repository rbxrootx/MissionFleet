// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5856B870 .. +0x73 bytes.
extern "C" __declspec(naked) void FUN_5856b870_5856B870() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 6ch], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 70h], eax
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 5ch], 40000000h
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 74h], 0
        ; Exact mapped bytes 74 3F: je 0x5856b8dd
        __asm _emit 0x74
        __asm _emit 0x3f
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        sub ecx, 190h
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        neg eax
        add eax, 12ch
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 74h]
        mov dword ptr [ebp - 8], edx
        ; Exact mapped bytes A1 90 20 96 58: mov eax, dword ptr [0x58962090]
        __asm _emit 0xa1
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 E4 22 00 00: call 0x5856dbc0
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x22
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}

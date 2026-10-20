// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00466193 .. +0x7B bytes.
extern "C" __declspec(naked) void FUN_00466193_00466193() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 16ch]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 DF 14 FE FF: call 0x4476a2
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x14
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 26: je 0x4661f2
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 42 02: mov ax, word ptr [edx + 2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x02
        ; Exact mapped bytes 66 25 1F 00: and ax, 0x1f
        __asm _emit 0x66
        __asm _emit 0x25
        __asm _emit 0x1f
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        mov byte ptr [ecx], al
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 42 0C: mov ax, word ptr [edx + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x0c
        ; Exact mapped bytes 66 C1 E8 04: shr ax, 4
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x04
        ; Exact mapped bytes 66 25 FF 00: and ax, 0xff
        __asm _emit 0x66
        __asm _emit 0x25
        __asm _emit 0xff
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 10h]
        mov byte ptr [ecx], al
        ; Exact mapped bytes EB 0C: jmp 0x4661fe
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov edx, dword ptr [ebp + 10h]
        mov byte ptr [edx], 0
        mov eax, dword ptr [ebp + 0ch]
        mov byte ptr [eax], 0
        add esp, 8
        cmp ebp, esp
        ; Exact mapped bytes E8 D8 25 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x25
        __asm _emit 0x04
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}

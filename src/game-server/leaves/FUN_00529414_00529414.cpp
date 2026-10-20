// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00529414 .. +0xAA bytes.
extern "C" __declspec(naked) void FUN_00529414_00529414() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 10h], ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 1D 56 01 00: call 0x53ea42
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x56
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 0F 8E 83 00 00 00: jle 0x5294b5
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        shl eax, 2
        add eax, 3
        and al, 0fch
        ; Exact mapped bytes E8 7E 03 F8 FF: call 0x4a97c0
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x03
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], esp
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 39 56 01 00: call 0x53ea94
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x56
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x52946d
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        cmp ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 7D 40: jge 0x5294b5
        __asm _emit 0x7d
        __asm _emit 0x40
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 3D F2 FF FF: call 0x5286c4
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 28: je 0x5294b3
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 3D EF FF FF: call 0x5283de
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xef
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 AB FD FF FF: call 0x52925e
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB AF: jmp 0x529464
        __asm _emit 0xeb
        __asm _emit 0xaf
        lea esp, [ebp - 14h]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

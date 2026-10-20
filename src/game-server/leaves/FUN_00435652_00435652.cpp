// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00435652 .. +0x121 bytes.
extern "C" __declspec(naked) void FUN_00435652_00435652() {
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
        mov dword ptr [ebp - 8], 0
        mov dword ptr [ebp - 4], 0
        mov dword ptr [ebp - 0ch], 0
        lea eax, [ebp - 0ch]
        push eax
        lea ecx, [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 18h]
        mov ecx, dword ptr [ecx + 1ch]
        ; Exact mapped bytes E8 1F C2 03 00: call 0x4718ba
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xc2
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 28h
        ; Exact mapped bytes E8 27 4E FD FF: call 0x40a4d0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x4e
        __asm _emit 0xfd
        __asm _emit 0xff
        push 70h
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 18h]
        add eax, 80h
        push eax
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 28h
        ; Exact mapped bytes E8 04 B9 FD FF: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xb9
        __asm _emit 0xfd
        __asm _emit 0xff
        push 10h
        ; Exact mapped bytes 8B 0D 80 CB 5D 00: mov ecx, dword ptr [0x5dcb80]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes E8 19 11 FE FF: call 0x4167e8
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x11
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 28h
        ; Exact mapped bytes E8 EB B8 FD FF: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xb8
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 28h
        ; Exact mapped bytes E8 D8 B8 FD FF: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xb8
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [eax + 4], ecx
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 8], 1
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 4]
        shl ecx, 10h
        mov edx, dword ptr [ebp - 10h]
        or ecx, dword ptr [edx + 8]
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 0ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 28h
        ; Exact mapped bytes E8 6D 4D FD FF: call 0x40a490
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x4d
        __asm _emit 0xfd
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 28h
        ; Exact mapped bytes E8 41 4D FD FF: call 0x40a470
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x4d
        __asm _emit 0xfd
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0ch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 18h]
        mov edx, dword ptr [ecx + 104h]
        add edx, 1
        shl edx, 10h
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 18h]
        or edx, dword ptr [ecx + 10ch]
        push edx
        push 80020113h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 CF 1A 05 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x1a
        __asm _emit 0x05
        __asm _emit 0x00
        add esp, 10h
        cmp ebp, esp
        ; Exact mapped bytes E8 73 30 07 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x30
        __asm _emit 0x07
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

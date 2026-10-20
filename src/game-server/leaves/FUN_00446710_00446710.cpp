// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00446710 .. +0xDC bytes.
extern "C" __declspec(naked) void FUN_00446710_00446710() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57afe8h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        mov dword ptr [ebp - 10h], 0cccccccch
        mov dword ptr [ebp - 10h], ecx
        push 1
        push 0
        push -1
        push -1
        push 0
        push 10060000h
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 E2 03 04 00: call 0x486b30
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x03
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 110h
        ; Exact mapped bytes E8 0B AF 0E 00: call 0x53166e
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xaf
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 14ch
        ; Exact mapped bytes E8 96 A7 0E 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xa7
        __asm _emit 0x0e
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 904h
        ; Exact mapped bytes E8 3D 5D 00 00: call 0x44c4c0
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx], 581988h
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 168h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 8e8h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 108h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 104h], 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 E6 01 00 00: call 0x4469ae
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        cmp ebp, esp
        ; Exact mapped bytes E8 FA 1F 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x1f
        __asm _emit 0x06
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5862AE90 .. +0x13C bytes.
extern "C" __declspec(naked) void FUN_5862ae90_5862AE90() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 28h
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x5862aeab
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 0F 8D 13 01 00 00: jge 0x5862afc8
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x13
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        movzx edx, byte ptr [ecx + 26ch]
        add edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        movzx ecx, byte ptr [eax + 26ch]
        cmp edx, ecx
        ; Exact mapped bytes 0F 8D 83 00 00 00: jge 0x5862af57
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx*4 + 238h]
        mov dword ptr [ebp - 0ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 F2 AF E5 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xaf
        __asm _emit 0xe5
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx*4 + 240h]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 8]
        movzx eax, byte ptr [edx + 26ch]
        add eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 268h]
        mov eax, dword ptr [edx + eax*4]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 60 18 EC FF: call 0x584ec780
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x18
        __asm _emit 0xec
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx*4 + 248h]
        mov dword ptr [ebp - 14h], eax
        push 0fh
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 56 B0 E5 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xb0
        __asm _emit 0xe5
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx*4 + 250h]
        mov dword ptr [ebp - 18h], eax
        push 0fh
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 3C B0 E5 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xb0
        __asm _emit 0xe5
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 6C: jmp 0x5862afc3
        __asm _emit 0xeb
        __asm _emit 0x6c
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx*4 + 238h]
        mov dword ptr [ebp - 1ch], eax
        push 0
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 6F AF E5 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xaf
        __asm _emit 0xe5
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx*4 + 240h]
        mov dword ptr [ebp - 20h], eax
        push 588aea6dh
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 F2 17 EC FF: call 0x584ec780
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x17
        __asm _emit 0xec
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx*4 + 248h]
        mov dword ptr [ebp - 24h], eax
        push 0
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 E8 AF E5 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xe5
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx*4 + 250h]
        mov dword ptr [ebp - 28h], eax
        push 0
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 CE AF E5 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xaf
        __asm _emit 0xe5
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 DA FE FF FF: jmp 0x5862aea2
        __asm _emit 0xe9
        __asm _emit 0xda
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}

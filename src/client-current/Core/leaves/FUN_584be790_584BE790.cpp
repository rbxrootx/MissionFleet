// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584BE790 .. +0xAC bytes.
extern "C" __declspec(naked) void FUN_584be790_584BE790() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 74h]
        imul edx, dword ptr [ecx + 74h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [eax + 78h]
        imul eax, dword ptr [ecx + 78h]
        add edx, eax
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 0ch], 0e10h
        ; Exact mapped bytes 7D 77: jge 0x584be838
        __asm _emit 0x7d
        __asm _emit 0x77
        push 0
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 62 6F 12 00: call 0x585e5730
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x6f
        __asm _emit 0x12
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 3b4h]
        ; Exact mapped bytes E8 54 05 00 00: call 0x584bed30
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 3b8h], 40000000h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 3b4h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx]
        mov ecx, dword ptr [edx + 3b4h]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        nop
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x584be815
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 20h
        ; Exact mapped bytes 7D 1D: jge 0x584be838
        __asm _emit 0x7d
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 0b0h]
        mov dword ptr [ebp - 10h], eax
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 AB 76 FC FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x76
        __asm _emit 0xfc
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB D4: jmp 0x584be80c
        __asm _emit 0xeb
        __asm _emit 0xd4
        mov esp, ebp
        pop ebp
        ret
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00443BF0 .. +0x96 bytes.
extern "C" __declspec(naked) void FUN_00443bf0_00443BF0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push edi
        mov eax, dword ptr [ebp + 8]
        sub eax, 10h
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 8
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes EB 09: jmp 0x443c14
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 8]
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 73 02: jae 0x443c1e
        __asm _emit 0x73
        __asm _emit 0x02
        ; Exact mapped bytes EB ED: jmp 0x443c0b
        __asm _emit 0xeb
        __asm _emit 0xed
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 18h
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp + 8]
        add edx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 8], edx
        ; Exact mapped bytes EB 09: jmp 0x443c3b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, dword ptr [ebp - 4]
        cmp dword ptr [ebp - 8], ecx
        ; Exact mapped bytes 73 02: jae 0x443c48
        __asm _emit 0x73
        __asm _emit 0x02
        ; Exact mapped bytes EB EA: jmp 0x443c32
        __asm _emit 0xeb
        __asm _emit 0xea
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx]
        and eax, 0ffff0000h
        or eax, 0debdh
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx], eax
        mov ecx, dword ptr [ebp + 0ch]
        mov eax, 0a3a3a3a3h
        mov edi, dword ptr [ebp + 8]
        mov edx, ecx
        shr ecx, 2
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        mov ecx, edx
        and ecx, 3
        ; Exact mapped bytes F3 AA: rep stosb byte ptr es:[edi], al
        __asm _emit 0xf3
        __asm _emit 0xaa
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 2B 88 08 00: call 0x4cc4a9
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x88
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        pop edi
        mov esp, ebp
        pop ebp
        ret
    }
}

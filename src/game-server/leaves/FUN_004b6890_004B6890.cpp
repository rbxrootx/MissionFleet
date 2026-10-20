// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004B6890 .. +0x1EE bytes.
extern "C" __declspec(naked) void FUN_004b6890_004B6890() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 2ch
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 10h]
        mov dword ptr [ebp - 2ch], ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 8]
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 28h], 0
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 7C 13: jl 0x4b68c8
        __asm _emit 0x7c
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 8]
        shl ecx, 1
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 28h]
        add edx, 1
        mov dword ptr [ebp - 28h], edx
        ; Exact mapped bytes EB E7: jmp 0x4b68af
        __asm _emit 0xeb
        __asm _emit 0xe7
        mov eax, dword ptr [ebp - 28h]
        imul eax, eax, 204h
        mov ecx, dword ptr [ebp - 2ch]
        lea edx, [ecx + eax + 144h]
        mov dword ptr [ebp - 0ch], edx
        mov dword ptr [ebp - 20h], 0
        ; Exact mapped bytes EB 09: jmp 0x4b68f0
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 20h]
        add eax, 1
        mov dword ptr [ebp - 20h], eax
        cmp dword ptr [ebp - 20h], 3fh
        ; Exact mapped bytes 7D 20: jge 0x4b6916
        __asm _emit 0x7d
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ebp - 0ch]
        lea eax, [edx + ecx*8]
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [eax + 4], ecx
        ; Exact mapped bytes EB D1: jmp 0x4b68e7
        __asm _emit 0xeb
        __asm _emit 0xd1
        mov edx, dword ptr [ebp - 28h]
        shl edx, 0fh
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 0ch]
        add ecx, edx
        mov dword ptr [ebp - 10h], ecx
        push 4
        push 1000h
        push 8000h
        mov edx, dword ptr [ebp - 10h]
        push edx
        ; Exact mapped bytes FF 15 64 22 5E 00: call dword ptr [0x5e2264]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 08: jne 0x4b6949
        __asm _emit 0x75
        __asm _emit 0x08
        or eax, 0ffffffffh
        ; Exact mapped bytes E9 31 01 00 00: jmp 0x4b6a7a
        __asm _emit 0xe9
        __asm _emit 0x31
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        add eax, 7000h
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes EB 0C: jmp 0x4b6968
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov edx, dword ptr [ebp - 4]
        add edx, 1000h
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 4]
        cmp eax, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 77 5D: ja 0x4b69cd
        __asm _emit 0x77
        __asm _emit 0x5d
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 8], 0ffffffffh
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0ffch], 0ffffffffh
        mov eax, dword ptr [ebp - 4]
        add eax, 0ch
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ecx], 0ff0h
        mov edx, dword ptr [ebp - 18h]
        add edx, 1000h
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [eax + 4], edx
        mov ecx, dword ptr [ebp - 18h]
        sub ecx, 1000h
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [edx + 8], ecx
        mov eax, dword ptr [ebp - 18h]
        add eax, 0fech
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 24h]
        mov dword ptr [ecx], 0ff0h
        ; Exact mapped bytes EB 8F: jmp 0x4b695c
        __asm _emit 0xeb
        __asm _emit 0x8f
        mov edx, dword ptr [ebp - 0ch]
        add edx, 1f8h
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 10h]
        add eax, 0ch
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ecx + 4], eax
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [ebp - 1ch]
        add eax, 0ch
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ecx + 8], eax
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 8]
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [ecx + 4], edx
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [ebp - 2ch]
        mov dword ptr [ecx + eax*4 + 44h], 0
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [ebp - 2ch]
        mov dword ptr [eax + edx*4 + 0c4h], 1
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes 0F BE 51 43: movsx edx, byte ptr [ecx + 0x43]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x51
        __asm _emit 0x43
        mov eax, dword ptr [ebp - 2ch]
        mov cl, byte ptr [eax + 43h]
        add cl, 1
        mov eax, dword ptr [ebp - 2ch]
        mov byte ptr [eax + 43h], cl
        test edx, edx
        ; Exact mapped bytes 75 0F: jne 0x4b6a5d
        __asm _emit 0x75
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 4]
        or edx, 1
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [eax + 4], edx
        mov edx, 80000000h
        mov ecx, dword ptr [ebp - 28h]
        shr edx, cl
        not edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 8]
        and ecx, edx
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [edx + 8], ecx
        mov eax, dword ptr [ebp - 28h]
        mov esp, ebp
        pop ebp
        ret
    }
}

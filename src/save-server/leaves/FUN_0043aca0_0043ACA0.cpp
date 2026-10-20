// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0043ACA0 .. +0xF1 bytes.
extern "C" __declspec(naked) void FUN_0043aca0_0043ACA0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 44h
        mov dword ptr [ebp - 3ch], ecx
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 34h], eax
        mov ecx, dword ptr [ebp - 3ch]
        mov edx, dword ptr [ebp - 3ch]
        mov eax, dword ptr [ecx + 4]
        sub eax, dword ptr [edx]
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 1
        ; Exact mapped bytes 73 0C: jae 0x43accf
        __asm _emit 0x73
        __asm _emit 0x0c
        mov dword ptr [ebp - 38h], 0ffffffffh
        ; Exact mapped bytes E9 B9 00 00 00: jmp 0x43ad88
        __asm _emit 0xe9
        __asm _emit 0xb9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        sub ecx, 1
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 3ch]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 34h]
        cmp ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 73 08: jae 0x43acf0
        __asm _emit 0x73
        __asm _emit 0x08
        lea edx, [ebp - 34h]
        mov dword ptr [ebp - 40h], edx
        ; Exact mapped bytes EB 06: jmp 0x43acf6
        __asm _emit 0xeb
        __asm _emit 0x06
        lea eax, [ebp - 10h]
        mov dword ptr [ebp - 40h], eax
        mov ecx, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 28h], ecx
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 24h]
        lea edx, [ecx + eax + 1]
        mov dword ptr [ebp - 8], edx
        mov al, byte ptr [ebp + 8]
        mov byte ptr [ebp - 14h], al
        mov cl, byte ptr [ebp - 14h]
        push ecx
        push ecx
        push esp
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 A1 CA FF FF: call 0x4377c0
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xca
        __asm _emit 0xff
        __asm _emit 0xff
        push ecx
        mov ecx, esp
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes E8 55 55 00 00: call 0x440280
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x55
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 0C B5 00 00: call 0x446240
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xb5
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        mov ecx, dword ptr [ebp - 3ch]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 2ch], edx
        mov eax, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 0ch]
        xor edx, edx
        cmp ecx, dword ptr [ebp - 20h]
        sete dl
        and edx, 0ffh
        neg edx
        sbb edx, edx
        inc edx
        and edx, 0ffh
        test edx, edx
        ; Exact mapped bytes 74 16: je 0x43ad7b
        __asm _emit 0x74
        __asm _emit 0x16
        mov eax, dword ptr [ebp - 3ch]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 30h], ecx
        mov edx, dword ptr [ebp - 0ch]
        sub edx, 1
        sub edx, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 44h], edx
        ; Exact mapped bytes EB 07: jmp 0x43ad82
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 44h], 0ffffffffh
        mov eax, dword ptr [ebp - 44h]
        mov dword ptr [ebp - 38h], eax
        mov eax, dword ptr [ebp - 38h]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}

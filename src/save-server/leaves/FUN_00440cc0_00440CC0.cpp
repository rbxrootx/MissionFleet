// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00440CC0 .. +0x165 bytes.
extern "C" __declspec(naked) void FUN_00440cc0_00440CC0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58bf20h
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
        sub esp, 3ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 10h], esp
        mov dword ptr [ebp - 48h], ecx
        cmp dword ptr [ebp + 8], -2
        ; Exact mapped bytes 77 17: ja 0x440d02
        __asm _emit 0x77
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 48h]
        mov ecx, dword ptr [ebp - 48h]
        mov edx, dword ptr [eax + 4]
        sub edx, dword ptr [ecx]
        mov eax, 0fffffffeh
        sub eax, dword ptr [ebp + 8]
        cmp edx, eax
        ; Exact mapped bytes 76 0D: jbe 0x440d0f
        __asm _emit 0x76
        __asm _emit 0x0d
        push 670a18h
        ; Exact mapped bytes E8 F4 52 FF FF: call 0x436000
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x52
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp - 48h]
        mov edx, dword ptr [ebp - 48h]
        mov eax, dword ptr [ecx + 4]
        sub eax, dword ptr [edx]
        add eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 48h]
        mov edx, dword ptr [ebp - 48h]
        mov ecx, dword ptr [ecx + 8]
        sub ecx, dword ptr [edx]
        sub ecx, 1
        cmp eax, ecx
        ; Exact mapped bytes 76 43: jbe 0x440d72
        __asm _emit 0x76
        __asm _emit 0x43
        mov edx, dword ptr [ebp - 48h]
        mov eax, dword ptr [ebp - 48h]
        mov ecx, dword ptr [edx + 4]
        sub ecx, dword ptr [eax]
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp - 14h]
        cmp edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 73 08: jae 0x440d4d
        __asm _emit 0x73
        __asm _emit 0x08
        lea eax, [ebp + 8]
        mov dword ptr [ebp - 4ch], eax
        ; Exact mapped bytes EB 06: jmp 0x440d53
        __asm _emit 0xeb
        __asm _emit 0x06
        lea ecx, [ebp - 14h]
        mov dword ptr [ebp - 4ch], ecx
        mov edx, dword ptr [ebp - 4ch]
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp - 48h]
        mov ecx, dword ptr [ebp - 48h]
        mov edx, dword ptr [eax + 4]
        sub edx, dword ptr [ecx]
        mov eax, dword ptr [ebp - 18h]
        add edx, dword ptr [eax]
        push edx
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 FE FB FF FF: call 0x440970
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 0F 86 9C 00 00 00: jbe 0x440e18
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        sub ecx, 1
        mov dword ptr [ebp - 38h], ecx
        mov edx, dword ptr [ebp - 48h]
        mov eax, dword ptr [edx + 4]
        add eax, 1
        mov dword ptr [ebp - 34h], eax
        mov cl, byte ptr [ebp - 24h]
        mov byte ptr [ebp - 1ch], cl
        mov dl, byte ptr [ebp - 28h]
        mov byte ptr [ebp - 20h], dl
        mov eax, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 30h], eax
        mov ecx, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 2ch], ecx
        ; Exact mapped bytes EB 12: jmp 0x440dbd
        __asm _emit 0xeb
        __asm _emit 0x12
        mov edx, dword ptr [ebp - 30h]
        sub edx, 1
        mov dword ptr [ebp - 30h], edx
        mov eax, dword ptr [ebp - 2ch]
        add eax, 1
        mov dword ptr [ebp - 2ch], eax
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 76 0A: jbe 0x440dcd
        __asm _emit 0x76
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 2ch]
        mov dl, byte ptr [ebp + 0ch]
        mov byte ptr [ecx], dl
        ; Exact mapped bytes EB DE: jmp 0x440dab
        __asm _emit 0xeb
        __asm _emit 0xde
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 48h]
        mov ecx, dword ptr [eax + 4]
        add ecx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 40h], ecx
        mov edx, dword ptr [ebp - 40h]
        mov byte ptr [edx], 0
        ; Exact mapped bytes EB 09: jmp 0x440df1
        __asm _emit 0xeb
        __asm _emit 0x09
        push 0
        push 0
        ; Exact mapped bytes E8 2F 4B 02 00: call 0x465920
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x4b
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 48h]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 44h], ecx
        mov edx, dword ptr [ebp - 44h]
        mov al, byte ptr [ebp + 0ch]
        mov byte ptr [edx], al
        mov ecx, dword ptr [ebp - 48h]
        mov edx, dword ptr [ecx + 4]
        add edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 48h]
        mov dword ptr [eax + 4], edx
        mov eax, dword ptr [ebp - 48h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
    }
}

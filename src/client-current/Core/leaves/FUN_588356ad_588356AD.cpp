// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588356AD .. +0x122 bytes.
extern "C" __declspec(naked) void FUN_588356ad_588356AD() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ecx
        push ebx
        push edi
        xor ebx, ebx
        mov edi, ecx
        mov dword ptr [ebp - 4], ebx
        ; Exact mapped bytes FF 15 FC 41 89 58: call dword ptr [0x588941fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 8], eax
        lea eax, [ebp - 4]
        push eax
        push 588f01e0h
        ; Exact mapped bytes E8 81 6C 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x6c
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        push eax
        push 80000001h
        ; Exact mapped bytes FF 15 3C 40 89 58: call dword ptr [0x5889403c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 0F 85 DE 00 00 00: jne 0x588357c5
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xde
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push esi
        push 4
        lea eax, [ebp + 8]
        push eax
        push 4
        push ebx
        push 588f0278h
        ; Exact mapped bytes E8 58 6C 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x6c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 35 34 40 89 58: mov esi, dword ptr [0x58894034]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0x34
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        pop ecx
        push eax
        push dword ptr [ebp - 4]
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        push 4
        lea eax, [ebp + 0ch]
        push eax
        push 4
        push ebx
        push 588f02f8h
        ; Exact mapped bytes E8 38 6C 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x6c
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        push eax
        push dword ptr [ebp - 4]
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        push 4
        lea eax, [ebp + 10h]
        push eax
        push 4
        push ebx
        push 588f0304h
        ; Exact mapped bytes E8 1E 6C 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x6c
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        push eax
        push dword ptr [ebp - 4]
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        push 4
        lea eax, [ebp - 8]
        push eax
        push 4
        push ebx
        push 588f0240h
        ; Exact mapped bytes E8 04 6C 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x6c
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        push eax
        push dword ptr [ebp - 4]
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        push dword ptr [ebp + 8]
        lea esi, [edi + 28h]
        push 588f02a8h
        ; Exact mapped bytes E8 ED 6B 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x6b
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        push eax
        push esi
        ; Exact mapped bytes E8 1C 49 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x49
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        push dword ptr [ebp + 0ch]
        push 588f02bch
        ; Exact mapped bytes E8 D5 6B 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x6b
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        push eax
        push esi
        ; Exact mapped bytes E8 04 49 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x49
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        push dword ptr [ebp + 10h]
        push 588f02d0h
        ; Exact mapped bytes E8 BD 6B 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x6b
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        push eax
        push esi
        ; Exact mapped bytes E8 EC 48 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x48
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        push dword ptr [ebp - 8]
        push 588f0310h
        ; Exact mapped bytes E8 A5 6B 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x6b
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        push eax
        push esi
        ; Exact mapped bytes E8 D4 48 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x48
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov bl, 1
        push dword ptr [ebp - 4]
        ; Exact mapped bytes FF 15 64 40 89 58: call dword ptr [0x58894064]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        pop esi
        pop edi
        mov al, bl
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}

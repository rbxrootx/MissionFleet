// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00407840 .. +0xEB bytes.
extern "C" __declspec(naked) void FUN_00407840_00407840() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 4395c8h
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
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 11 AD 00 00: call 0x412579
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xad
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 110h
        ; Exact mapped bytes E8 33 CA FF FF: call 0x4042b0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xca
        __asm _emit 0xff
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 128h
        ; Exact mapped bytes E8 C1 5C 00 00: call 0x40d550
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x5c
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 12ch
        ; Exact mapped bytes E8 B3 5C 00 00: call 0x40d550
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x5c
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx], 43c758h
        push 44da4ch
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 110h
        ; Exact mapped bytes E8 7B 64 02 00: call 0x42dd34
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x64
        __asm _emit 0x02
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 114h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 118h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 11ch], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 120h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 124h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 14h], 8
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 8ch], 1
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
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

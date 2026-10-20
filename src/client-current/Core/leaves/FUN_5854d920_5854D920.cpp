// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5854D920 .. +0x10C bytes.
extern "C" __declspec(naked) void FUN_5854d920_5854D920() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 588830c3h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 0ch
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], ecx
        movzx eax, word ptr [ebp + 1ch]
        push eax
        mov ecx, dword ptr [ebp + 18h]
        push ecx
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 27 70 26 00: call 0x587b4990
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x70
        __asm _emit 0x26
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 588a7f34h
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 54h
        ; Exact mapped bytes E8 AC 48 F5 FF: call 0x584a2230
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x48
        __asm _emit 0xf5
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 5ch
        ; Exact mapped bytes E8 9D 48 F5 FF: call 0x584a2230
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x48
        __asm _emit 0xf5
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 2
        ; Exact mapped bytes FF 15 B8 42 89 58: call dword ptr [0x588942b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 64h], eax
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 54h
        ; Exact mapped bytes E8 C2 5C F5 FF: call 0x584a3670
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x5c
        __asm _emit 0xf5
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 5ch
        ; Exact mapped bytes E8 B7 5C F5 FF: call 0x584a3670
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x5c
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 64h]
        xor edx, edx
        mov ecx, 28h
        div ecx
        add edx, 2
        mov dword ptr [ebp - 14h], edx
        imul edx, dword ptr [ebp - 14h], 3e8h
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 14h]
        add eax, 0bb8h
        mov dword ptr [ebp - 14h], eax
        mov eax, dword ptr [ebp - 14h]
        mov ecx, 4
        mul ecx
        mov edx, 0ffffffffh
        cmovb eax, edx
        push eax
        ; Exact mapped bytes E8 40 36 2E 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x36
        __asm _emit 0x2e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 18h], eax
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [eax + 50h], ecx
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
        pop ecx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}

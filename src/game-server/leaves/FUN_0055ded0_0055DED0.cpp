// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0055DED0 .. +0xFC bytes.
extern "C" __declspec(naked) void FUN_0055ded0_0055DED0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57fad5h
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
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 EC 9D F9 FF: call 0x4f7ce0
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x9d
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 3ch
        ; Exact mapped bytes E8 01 30 FD FF: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x30
        __asm _emit 0xfd
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 40h
        ; Exact mapped bytes E8 4B 31 00 00: call 0x561060
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x31
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 44h
        ; Exact mapped bytes E8 60 31 00 00: call 0x561080
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x31
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 58a51ch
        push 1dh
        push 5cff18h
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        ; Exact mapped bytes E8 27 D2 F9 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xd2
        __asm _emit 0xf9
        __asm _emit 0xff
        push 1eh
        push 5cff18h
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 17 D2 F9 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xd2
        __asm _emit 0xf9
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 20h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx + 24h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 1ch], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 1ch]
        mov dword ptr [edx + 28h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 30h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 34h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 2ch], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 38h], 0
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [eax + 68h], ecx
        push 2ah
        push 5cff18h
        mov edx, dword ptr [ebp - 10h]
        push edx
        ; Exact mapped bytes E8 AE D1 F9 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xd1
        __asm _emit 0xf9
        __asm _emit 0xff
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
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0040DCC0 .. +0xE7 bytes.
extern "C" __declspec(naked) void FUN_0040dcc0_0040DCC0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 43a007h
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
        ; Exact mapped bytes E8 91 48 00 00: call 0x412579
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x48
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 120h
        ; Exact mapped bytes E8 B3 65 FF FF: call 0x4042b0
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x65
        __asm _emit 0xff
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 124h
        ; Exact mapped bytes E8 A1 65 FF FF: call 0x4042b0
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x65
        __asm _emit 0xff
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 2
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx], 43d048h
        push 44dbbch
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 120h
        ; Exact mapped bytes E8 05 00 02 00: call 0x42dd34
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        push 44dbc0h
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 124h
        ; Exact mapped bytes E8 F2 FF 01 00: call 0x42dd34
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 14h], 2
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 8ch], 1
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 118h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 11ch], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 114h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 110h], 0
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

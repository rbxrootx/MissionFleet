// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00406030 .. +0xC0 bytes.
extern "C" __declspec(naked) void FUN_00406030_00406030() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 439567h
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
        ; Exact mapped bytes E8 21 C5 00 00: call 0x412579
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xc5
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 114h
        ; Exact mapped bytes E8 43 E2 FF FF: call 0x4042b0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xe2
        __asm _emit 0xff
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 118h
        ; Exact mapped bytes E8 31 E2 FF FF: call 0x4042b0
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xe2
        __asm _emit 0xff
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 2
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx], 43c6d8h
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 110h], 0
        push 44da44h
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 114h
        ; Exact mapped bytes E8 88 7C 02 00: call 0x42dd34
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x7c
        __asm _emit 0x02
        __asm _emit 0x00
        push 44da48h
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 118h
        ; Exact mapped bytes E8 75 7C 02 00: call 0x42dd34
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x7c
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 14h], 3
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 8ch], 1
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

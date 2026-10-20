// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0040D5C0 .. +0x193 bytes.
extern "C" __declspec(naked) void FUN_0040d5c0_0040D5C0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 439f65h
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
        ; Exact mapped bytes E8 91 4F 00 00: call 0x412579
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x4f
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 120h
        ; Exact mapped bytes E8 B3 6C FF FF: call 0x4042b0
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x6c
        __asm _emit 0xff
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 124h
        ; Exact mapped bytes E8 A1 6C FF FF: call 0x4042b0
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x6c
        __asm _emit 0xff
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 2
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 130h
        ; Exact mapped bytes E8 8F 6C FF FF: call 0x4042b0
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x6c
        __asm _emit 0xff
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 3
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 13ch
        ; Exact mapped bytes E8 7D 6C FF FF: call 0x4042b0
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x6c
        __asm _emit 0xff
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 4
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx], 43cf58h
        push 44dba4h
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 120h
        ; Exact mapped bytes E8 E1 06 02 00: call 0x42dd34
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x06
        __asm _emit 0x02
        __asm _emit 0x00
        push 44dba8h
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 124h
        ; Exact mapped bytes E8 CE 06 02 00: call 0x42dd34
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x06
        __asm _emit 0x02
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 128h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 12ch], 0
        push 44dbach
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 130h
        ; Exact mapped bytes E8 A1 06 02 00: call 0x42dd34
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x06
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov byte ptr [ecx + 134h], 0
        mov edx, dword ptr [ebp - 10h]
        mov byte ptr [edx + 135h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 138h], 0
        push 44dbb0h
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 13ch
        ; Exact mapped bytes E8 6D 06 02 00: call 0x42dd34
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x06
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 140h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 144h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 148h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 14h], 0ch
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 8ch], 1
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 118h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 11ch], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 114h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 110h], 0
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

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004FBAB0 .. +0xD3 bytes.
extern "C" __declspec(naked) void FUN_004fbab0_004FBAB0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57d486h
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
        sub esp, 18h
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 7C 15: jl 0x4fbae6
        __asm _emit 0x7c
        __asm _emit 0x15
        cmp dword ptr [ebp + 8], 0fh
        ; Exact mapped bytes 73 0F: jae 0x4fbae6
        __asm _emit 0x73
        __asm _emit 0x0f
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax*4 + 5849b8h]
        mov dword ptr [ebp - 10h], ecx
        ; Exact mapped bytes EB 07: jmp 0x4fbaed
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 10h], 5849f4h
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 75 09: jne 0x4fbafc
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 20h], 5c7938h
        ; Exact mapped bytes EB 06: jmp 0x4fbb02
        __asm _emit 0xeb
        __asm _emit 0x06
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        push 5c7940h
        ; Exact mapped bytes E8 FD 40 FD FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x40
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 10h
        push 18h
        ; Exact mapped bytes E8 CE 14 FF FF: call 0x4ecff0
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x14
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 19: je 0x4fbb4b
        __asm _emit 0x74
        __asm _emit 0x19
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 FB 50 03 00: call 0x530c41
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x50
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes EB 07: jmp 0x4fbb52
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 24h], 0
        mov eax, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 14h], ecx
        push 598af8h
        lea edx, [ebp - 14h]
        push edx
        ; Exact mapped bytes E8 AD 47 FB FF: call 0x4b0320
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x47
        __asm _emit 0xfb
        __asm _emit 0xff
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
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
